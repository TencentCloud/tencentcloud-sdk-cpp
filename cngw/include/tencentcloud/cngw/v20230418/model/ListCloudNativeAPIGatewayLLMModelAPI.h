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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_LISTCLOUDNATIVEAPIGATEWAYLLMMODELAPI_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_LISTCLOUDNATIVEAPIGATEWAYLLMMODELAPI_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/CloudNativeAPIGatewayLLMModelAPI.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * LLM 模型 API 列表
                */
                class ListCloudNativeAPIGatewayLLMModelAPI : public AbstractModel
                {
                public:
                    ListCloudNativeAPIGatewayLLMModelAPI();
                    ~ListCloudNativeAPIGatewayLLMModelAPI() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数
                     * @return TotalCount 总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置总数
                     * @param _totalCount 总数
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
                     * 获取AI 网关模型 API 列表。
                     * @return DataList AI 网关模型 API 列表。
                     * 
                     */
                    std::vector<CloudNativeAPIGatewayLLMModelAPI> GetDataList() const;

                    /**
                     * 设置AI 网关模型 API 列表。
                     * @param _dataList AI 网关模型 API 列表。
                     * 
                     */
                    void SetDataList(const std::vector<CloudNativeAPIGatewayLLMModelAPI>& _dataList);

                    /**
                     * 判断参数 DataList 是否已赋值
                     * @return DataList 是否已赋值
                     * 
                     */
                    bool DataListHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * AI 网关模型 API 列表。
                     */
                    std::vector<CloudNativeAPIGatewayLLMModelAPI> m_dataList;
                    bool m_dataListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_LISTCLOUDNATIVEAPIGATEWAYLLMMODELAPI_H_
