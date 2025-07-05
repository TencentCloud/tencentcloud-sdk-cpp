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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINEINFOREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeMachineInfo请求参数结构体
                */
                class DescribeMachineInfoRequest : public AbstractModel
                {
                public:
                    DescribeMachineInfoRequest();
                    ~DescribeMachineInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主机安全客户端唯一Uuid。
                     * @return Uuid 主机安全客户端唯一Uuid。
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机安全客户端唯一Uuid。
                     * @param _uuid 主机安全客户端唯一Uuid。
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Quuid , Uuid 必填一项
                     * @return Quuid Quuid , Uuid 必填一项
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Quuid , Uuid 必填一项
                     * @param _quuid Quuid , Uuid 必填一项
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                private:

                    /**
                     * 主机安全客户端唯一Uuid。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Quuid , Uuid 必填一项
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINEINFOREQUEST_H_
