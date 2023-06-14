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

#ifndef TENCENTCLOUD_IRP_V20220324_MODEL_RECOMMENDCONTENTRESPONSE_H_
#define TENCENTCLOUD_IRP_V20220324_MODEL_RECOMMENDCONTENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/irp/v20220324/model/RecItemData.h>


namespace TencentCloud
{
    namespace Irp
    {
        namespace V20220324
        {
            namespace Model
            {
                /**
                * RecommendContent返回参数结构体
                */
                class RecommendContentResponse : public AbstractModel
                {
                public:
                    RecommendContentResponse();
                    ~RecommendContentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取推荐追踪id，用于行为上报。每次接口调用返回的traceId不同
                     * @return RecTraceId 推荐追踪id，用于行为上报。每次接口调用返回的traceId不同
                     * 
                     */
                    std::string GetRecTraceId() const;

                    /**
                     * 判断参数 RecTraceId 是否已赋值
                     * @return RecTraceId 是否已赋值
                     * 
                     */
                    bool RecTraceIdHasBeenSet() const;

                    /**
                     * 获取标识具体的物料信息
                     * @return DataList 标识具体的物料信息
                     * 
                     */
                    std::vector<RecItemData> GetDataList() const;

                    /**
                     * 判断参数 DataList 是否已赋值
                     * @return DataList 是否已赋值
                     * 
                     */
                    bool DataListHasBeenSet() const;

                private:

                    /**
                     * 推荐追踪id，用于行为上报。每次接口调用返回的traceId不同
                     */
                    std::string m_recTraceId;
                    bool m_recTraceIdHasBeenSet;

                    /**
                     * 标识具体的物料信息
                     */
                    std::vector<RecItemData> m_dataList;
                    bool m_dataListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220324_MODEL_RECOMMENDCONTENTRESPONSE_H_
