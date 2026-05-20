/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_LISTCLOUDNATIVEAPIGATEWAYLLMMODELSERVICE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_LISTCLOUDNATIVEAPIGATEWAYLLMMODELSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayLLMModelService.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * LLM 模型服务列表
                */
                class ListCloudNativeAPIGatewayLLMModelService : public AbstractModel
                {
                public:
                    ListCloudNativeAPIGatewayLLMModelService();
                    ~ListCloudNativeAPIGatewayLLMModelService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型服务数量。
                     * @return TotalCount 模型服务数量。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置模型服务数量。
                     * @param _totalCount 模型服务数量。
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取模型服务列表。
                     * @return DataList 模型服务列表。
                     * 
                     */
                    std::vector<CloudNativeAPIGatewayLLMModelService> GetDataList() const;

                    /**
                     * 设置模型服务列表。
                     * @param _dataList 模型服务列表。
                     * 
                     */
                    void SetDataList(const std::vector<CloudNativeAPIGatewayLLMModelService>& _dataList);

                    /**
                     * 判断参数 DataList 是否已赋值
                     * @return DataList 是否已赋值
                     * 
                     */
                    bool DataListHasBeenSet() const;

                private:

                    /**
                     * 模型服务数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 模型服务列表。
                     */
                    std::vector<CloudNativeAPIGatewayLLMModelService> m_dataList;
                    bool m_dataListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_LISTCLOUDNATIVEAPIGATEWAYLLMMODELSERVICE_H_
