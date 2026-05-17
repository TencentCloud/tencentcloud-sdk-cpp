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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEMODELSERVICESREQUEST_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEMODELSERVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/DescribeModelServicesSort.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * DescribeModelServices请求参数结构体
                */
                class DescribeModelServicesRequest : public AbstractModel
                {
                public:
                    DescribeModelServicesRequest();
                    ~DescribeModelServicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例</p>
                     * @return InstanceID <p>实例</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>实例</p>
                     * @param _instanceID <p>实例</p>
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取<p>分页参数</p>
                     * @return Offset <p>分页参数</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页参数</p>
                     * @param _offset <p>分页参数</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>分页限制</p>
                     * @return Limit <p>分页限制</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页限制</p>
                     * @param _limit <p>分页限制</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>ID列表</p>
                     * @return IDs <p>ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetIDs() const;

                    /**
                     * 设置<p>ID列表</p>
                     * @param _iDs <p>ID列表</p>
                     * 
                     */
                    void SetIDs(const std::vector<std::string>& _iDs);

                    /**
                     * 判断参数 IDs 是否已赋值
                     * @return IDs 是否已赋值
                     * 
                     */
                    bool IDsHasBeenSet() const;

                    /**
                     * 获取<p>排除的ID列表</p>
                     * @return NotIDs <p>排除的ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetNotIDs() const;

                    /**
                     * 设置<p>排除的ID列表</p>
                     * @param _notIDs <p>排除的ID列表</p>
                     * 
                     */
                    void SetNotIDs(const std::vector<std::string>& _notIDs);

                    /**
                     * 判断参数 NotIDs 是否已赋值
                     * @return NotIDs 是否已赋值
                     * 
                     */
                    bool NotIDsHasBeenSet() const;

                    /**
                     * 获取<p>状态：normal，disabled</p>
                     * @return Status <p>状态：normal，disabled</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态：normal，disabled</p>
                     * @param _status <p>状态：normal，disabled</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>关键词</p>
                     * @return Keyword <p>关键词</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>关键词</p>
                     * @param _keyword <p>关键词</p>
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取<p>模型ID</p>
                     * @return ModelID <p>模型ID</p>
                     * 
                     */
                    std::string GetModelID() const;

                    /**
                     * 设置<p>模型ID</p>
                     * @param _modelID <p>模型ID</p>
                     * 
                     */
                    void SetModelID(const std::string& _modelID);

                    /**
                     * 判断参数 ModelID 是否已赋值
                     * @return ModelID 是否已赋值
                     * 
                     */
                    bool ModelIDHasBeenSet() const;

                    /**
                     * 获取<p>排序</p>
                     * @return Sort <p>排序</p>
                     * 
                     */
                    DescribeModelServicesSort GetSort() const;

                    /**
                     * 设置<p>排序</p>
                     * @param _sort <p>排序</p>
                     * 
                     */
                    void SetSort(const DescribeModelServicesSort& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取<p>模型类型，OpenAI或Anthropic</p>
                     * @return ModelProtocol <p>模型类型，OpenAI或Anthropic</p>
                     * 
                     */
                    std::string GetModelProtocol() const;

                    /**
                     * 设置<p>模型类型，OpenAI或Anthropic</p>
                     * @param _modelProtocol <p>模型类型，OpenAI或Anthropic</p>
                     * 
                     */
                    void SetModelProtocol(const std::string& _modelProtocol);

                    /**
                     * 判断参数 ModelProtocol 是否已赋值
                     * @return ModelProtocol 是否已赋值
                     * 
                     */
                    bool ModelProtocolHasBeenSet() const;

                private:

                    /**
                     * <p>实例</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>分页参数</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页限制</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>ID列表</p>
                     */
                    std::vector<std::string> m_iDs;
                    bool m_iDsHasBeenSet;

                    /**
                     * <p>排除的ID列表</p>
                     */
                    std::vector<std::string> m_notIDs;
                    bool m_notIDsHasBeenSet;

                    /**
                     * <p>状态：normal，disabled</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>关键词</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>模型ID</p>
                     */
                    std::string m_modelID;
                    bool m_modelIDHasBeenSet;

                    /**
                     * <p>排序</p>
                     */
                    DescribeModelServicesSort m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <p>模型类型，OpenAI或Anthropic</p>
                     */
                    std::string m_modelProtocol;
                    bool m_modelProtocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEMODELSERVICESREQUEST_H_
