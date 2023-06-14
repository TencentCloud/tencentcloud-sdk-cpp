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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATEIMAGELIFECYCLEPERSONALREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATEIMAGELIFECYCLEPERSONALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateImageLifecyclePersonal请求参数结构体
                */
                class CreateImageLifecyclePersonalRequest : public AbstractModel
                {
                public:
                    CreateImageLifecyclePersonalRequest();
                    ~CreateImageLifecyclePersonalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取仓库名称
                     * @return RepoName 仓库名称
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置仓库名称
                     * @param _repoName 仓库名称
                     * 
                     */
                    void SetRepoName(const std::string& _repoName);

                    /**
                     * 判断参数 RepoName 是否已赋值
                     * @return RepoName 是否已赋值
                     * 
                     */
                    bool RepoNameHasBeenSet() const;

                    /**
                     * 获取keep_last_days:保留最近几天的数据;keep_last_nums:保留最近多少个
                     * @return Type keep_last_days:保留最近几天的数据;keep_last_nums:保留最近多少个
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置keep_last_days:保留最近几天的数据;keep_last_nums:保留最近多少个
                     * @param _type keep_last_days:保留最近几天的数据;keep_last_nums:保留最近多少个
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
                     * 获取策略值
                     * @return Val 策略值
                     * 
                     */
                    int64_t GetVal() const;

                    /**
                     * 设置策略值
                     * @param _val 策略值
                     * 
                     */
                    void SetVal(const int64_t& _val);

                    /**
                     * 判断参数 Val 是否已赋值
                     * @return Val 是否已赋值
                     * 
                     */
                    bool ValHasBeenSet() const;

                private:

                    /**
                     * 仓库名称
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * keep_last_days:保留最近几天的数据;keep_last_nums:保留最近多少个
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 策略值
                     */
                    int64_t m_val;
                    bool m_valHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATEIMAGELIFECYCLEPERSONALREQUEST_H_
