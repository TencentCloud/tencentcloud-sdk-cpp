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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEAGENTCREDENTIALSREQUEST_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEAGENTCREDENTIALSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/DescribeAgentCredentialsSortDTO.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * DescribeAgentCredentials请求参数结构体
                */
                class DescribeAgentCredentialsRequest : public AbstractModel
                {
                public:
                    DescribeAgentCredentialsRequest();
                    ~DescribeAgentCredentialsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分页大小</p>
                     * @return Limit <p>分页大小</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页大小</p>
                     * @param _limit <p>分页大小</p>
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
                     * 获取<p>实例ID</p>
                     * @return InstanceID <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceID <p>实例ID</p>
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
                     * 获取<p>notID列表</p>
                     * @return NotIDs <p>notID列表</p>
                     * 
                     */
                    std::vector<std::string> GetNotIDs() const;

                    /**
                     * 设置<p>notID列表</p>
                     * @param _notIDs <p>notID列表</p>
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
                     * 获取<p>状态：normal正常状态，disabled下线状态</p>
                     * @return Status <p>状态：normal正常状态，disabled下线状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态：normal正常状态，disabled下线状态</p>
                     * @param _status <p>状态：normal正常状态，disabled下线状态</p>
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
                     * 获取<p>分页偏移量</p>
                     * @return Offset <p>分页偏移量</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量</p>
                     * @param _offset <p>分页偏移量</p>
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
                     * 获取<p>服务ID数组</p>
                     * @return IDs <p>服务ID数组</p>
                     * 
                     */
                    std::vector<std::string> GetIDs() const;

                    /**
                     * 设置<p>服务ID数组</p>
                     * @param _iDs <p>服务ID数组</p>
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
                     * 获取<p>认证类型：sts，reqKey</p>
                     * @return Type <p>认证类型：sts，reqKey</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>认证类型：sts，reqKey</p>
                     * @param _type <p>认证类型：sts，reqKey</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>排序</p>
                     * @return Sort <p>排序</p>
                     * 
                     */
                    DescribeAgentCredentialsSortDTO GetSort() const;

                    /**
                     * 设置<p>排序</p>
                     * @param _sort <p>排序</p>
                     * 
                     */
                    void SetSort(const DescribeAgentCredentialsSortDTO& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                private:

                    /**
                     * <p>分页大小</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>notID列表</p>
                     */
                    std::vector<std::string> m_notIDs;
                    bool m_notIDsHasBeenSet;

                    /**
                     * <p>状态：normal正常状态，disabled下线状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>分页偏移量</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>关键词</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>服务ID数组</p>
                     */
                    std::vector<std::string> m_iDs;
                    bool m_iDsHasBeenSet;

                    /**
                     * <p>认证类型：sts，reqKey</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>排序</p>
                     */
                    DescribeAgentCredentialsSortDTO m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEAGENTCREDENTIALSREQUEST_H_
