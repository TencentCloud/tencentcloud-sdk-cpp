/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_PERSONTRACEROUTE_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_PERSONTRACEROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/youmall/v20180228/model/PersonTracePoint.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 客户轨迹序列
                */
                class PersonTraceRoute : public AbstractModel
                {
                public:
                    PersonTraceRoute();
                    ~PersonTraceRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取轨迹编码
                     * @return TraceId 轨迹编码
                     * 
                     */
                    std::string GetTraceId() const;

                    /**
                     * 设置轨迹编码
                     * @param _traceId 轨迹编码
                     * 
                     */
                    void SetTraceId(const std::string& _traceId);

                    /**
                     * 判断参数 TraceId 是否已赋值
                     * @return TraceId 是否已赋值
                     * 
                     */
                    bool TraceIdHasBeenSet() const;

                    /**
                     * 获取轨迹点序列
                     * @return TracePointSet 轨迹点序列
                     * 
                     */
                    std::vector<PersonTracePoint> GetTracePointSet() const;

                    /**
                     * 设置轨迹点序列
                     * @param _tracePointSet 轨迹点序列
                     * 
                     */
                    void SetTracePointSet(const std::vector<PersonTracePoint>& _tracePointSet);

                    /**
                     * 判断参数 TracePointSet 是否已赋值
                     * @return TracePointSet 是否已赋值
                     * 
                     */
                    bool TracePointSetHasBeenSet() const;

                private:

                    /**
                     * 轨迹编码
                     */
                    std::string m_traceId;
                    bool m_traceIdHasBeenSet;

                    /**
                     * 轨迹点序列
                     */
                    std::vector<PersonTracePoint> m_tracePointSet;
                    bool m_tracePointSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_PERSONTRACEROUTE_H_
