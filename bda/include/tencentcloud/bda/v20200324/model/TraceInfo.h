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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_TRACEINFO_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_TRACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 人体动作轨迹信息。
                */
                class TraceInfo : public AbstractModel
                {
                public:
                    TraceInfo();
                    ~TraceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人体动作轨迹ID。
                     * @return TraceId 人体动作轨迹ID。
                     * 
                     */
                    std::string GetTraceId() const;

                    /**
                     * 设置人体动作轨迹ID。
                     * @param _traceId 人体动作轨迹ID。
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
                     * 获取包含的人体动作轨迹图片Id列表。
                     * @return BodyIds 包含的人体动作轨迹图片Id列表。
                     * 
                     */
                    std::vector<std::string> GetBodyIds() const;

                    /**
                     * 设置包含的人体动作轨迹图片Id列表。
                     * @param _bodyIds 包含的人体动作轨迹图片Id列表。
                     * 
                     */
                    void SetBodyIds(const std::vector<std::string>& _bodyIds);

                    /**
                     * 判断参数 BodyIds 是否已赋值
                     * @return BodyIds 是否已赋值
                     * 
                     */
                    bool BodyIdsHasBeenSet() const;

                private:

                    /**
                     * 人体动作轨迹ID。
                     */
                    std::string m_traceId;
                    bool m_traceIdHasBeenSet;

                    /**
                     * 包含的人体动作轨迹图片Id列表。
                     */
                    std::vector<std::string> m_bodyIds;
                    bool m_bodyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_TRACEINFO_H_
