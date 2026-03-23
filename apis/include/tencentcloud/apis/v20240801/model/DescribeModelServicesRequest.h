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
                     * 获取实例
                     * @return InstanceID 实例
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例
                     * @param _instanceID 实例
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
                     * 获取分页参数
                     * @return Offset 分页参数
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页参数
                     * @param _offset 分页参数
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
                     * 获取分页限制
                     * @return Limit 分页限制
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页限制
                     * @param _limit 分页限制
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
                     * 获取ID列表
                     * @return IDs ID列表
                     * 
                     */
                    std::vector<std::string> GetIDs() const;

                    /**
                     * 设置ID列表
                     * @param _iDs ID列表
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
                     * 获取排除的ID列表
                     * @return NotIDs 排除的ID列表
                     * 
                     */
                    std::vector<std::string> GetNotIDs() const;

                    /**
                     * 设置排除的ID列表
                     * @param _notIDs 排除的ID列表
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
                     * 获取状态：normal，disabled
                     * @return Status 状态：normal，disabled
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态：normal，disabled
                     * @param _status 状态：normal，disabled
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
                     * 获取关键词
                     * @return Keyword 关键词
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置关键词
                     * @param _keyword 关键词
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
                     * 获取模型ID
                     * @return ModelID 模型ID
                     * 
                     */
                    std::string GetModelID() const;

                    /**
                     * 设置模型ID
                     * @param _modelID 模型ID
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
                     * 获取排序
                     * @return Sort 排序
                     * 
                     */
                    DescribeModelServicesSort GetSort() const;

                    /**
                     * 设置排序
                     * @param _sort 排序
                     * 
                     */
                    void SetSort(const DescribeModelServicesSort& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                private:

                    /**
                     * 实例
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 分页参数
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页限制
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * ID列表
                     */
                    std::vector<std::string> m_iDs;
                    bool m_iDsHasBeenSet;

                    /**
                     * 排除的ID列表
                     */
                    std::vector<std::string> m_notIDs;
                    bool m_notIDsHasBeenSet;

                    /**
                     * 状态：normal，disabled
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 关键词
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 模型ID
                     */
                    std::string m_modelID;
                    bool m_modelIDHasBeenSet;

                    /**
                     * 排序
                     */
                    DescribeModelServicesSort m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEMODELSERVICESREQUEST_H_
