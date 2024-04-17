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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASOURCEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeDatasource请求参数结构体
                */
                class DescribeDatasourceRequest : public AbstractModel
                {
                public:
                    DescribeDatasourceRequest();
                    ~DescribeDatasourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取对象唯一ID
                     * @return Id 对象唯一ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置对象唯一ID
                     * @param _id 对象唯一ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取production：生产，development开发
                     * @return Env production：生产，development开发
                     * 
                     */
                    std::string GetEnv() const;

                    /**
                     * 设置production：生产，development开发
                     * @param _env production：生产，development开发
                     * 
                     */
                    void SetEnv(const std::string& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                private:

                    /**
                     * 对象唯一ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * production：生产，development开发
                     */
                    std::string m_env;
                    bool m_envHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASOURCEREQUEST_H_
