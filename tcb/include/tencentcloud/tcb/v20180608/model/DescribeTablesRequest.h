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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBETABLESREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBETABLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/MongoConnector.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeTables请求参数结构体
                */
                class DescribeTablesRequest : public AbstractModel
                {
                public:
                    DescribeTablesRequest();
                    ~DescribeTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页条件
                     * @return MgoLimit 分页条件
                     * 
                     */
                    int64_t GetMgoLimit() const;

                    /**
                     * 设置分页条件
                     * @param _mgoLimit 分页条件
                     * 
                     */
                    void SetMgoLimit(const int64_t& _mgoLimit);

                    /**
                     * 判断参数 MgoLimit 是否已赋值
                     * @return MgoLimit 是否已赋值
                     * 
                     */
                    bool MgoLimitHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return Tag 实例ID
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置实例ID
                     * @param _tag 实例ID
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取分页条件
                     * @return MgoOffset 分页条件
                     * 
                     */
                    int64_t GetMgoOffset() const;

                    /**
                     * 设置分页条件
                     * @param _mgoOffset 分页条件
                     * 
                     */
                    void SetMgoOffset(const int64_t& _mgoOffset);

                    /**
                     * 判断参数 MgoOffset 是否已赋值
                     * @return MgoOffset 是否已赋值
                     * 
                     */
                    bool MgoOffsetHasBeenSet() const;

                    /**
                     * 获取环境id
                     * @return EnvId 环境id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境id
                     * @param _envId 环境id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取MongoConnector
                     * @return MongoConnector MongoConnector
                     * 
                     */
                    MongoConnector GetMongoConnector() const;

                    /**
                     * 设置MongoConnector
                     * @param _mongoConnector MongoConnector
                     * 
                     */
                    void SetMongoConnector(const MongoConnector& _mongoConnector);

                    /**
                     * 判断参数 MongoConnector 是否已赋值
                     * @return MongoConnector 是否已赋值
                     * 
                     */
                    bool MongoConnectorHasBeenSet() const;

                private:

                    /**
                     * 分页条件
                     */
                    int64_t m_mgoLimit;
                    bool m_mgoLimitHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 分页条件
                     */
                    int64_t m_mgoOffset;
                    bool m_mgoOffsetHasBeenSet;

                    /**
                     * 环境id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * MongoConnector
                     */
                    MongoConnector m_mongoConnector;
                    bool m_mongoConnectorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBETABLESREQUEST_H_
