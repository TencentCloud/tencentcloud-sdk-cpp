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

#ifndef TENCENTCLOUD_HABO_V20181203_MODEL_DESCRIBESTATUSREQUEST_H_
#define TENCENTCLOUD_HABO_V20181203_MODEL_DESCRIBESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Habo
    {
        namespace V20181203
        {
            namespace Model
            {
                /**
                * DescribeStatus请求参数结构体
                */
                class DescribeStatusRequest : public AbstractModel
                {
                public:
                    DescribeStatusRequest();
                    ~DescribeStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取购买服务后获得的授权帐号，用于保证请求有效性
                     * @return Pk 购买服务后获得的授权帐号，用于保证请求有效性
                     * 
                     */
                    std::string GetPk() const;

                    /**
                     * 设置购买服务后获得的授权帐号，用于保证请求有效性
                     * @param _pk 购买服务后获得的授权帐号，用于保证请求有效性
                     * 
                     */
                    void SetPk(const std::string& _pk);

                    /**
                     * 判断参数 Pk 是否已赋值
                     * @return Pk 是否已赋值
                     * 
                     */
                    bool PkHasBeenSet() const;

                    /**
                     * 获取需要获取分析结果的样本md5
                     * @return Md5 需要获取分析结果的样本md5
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置需要获取分析结果的样本md5
                     * @param _md5 需要获取分析结果的样本md5
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                private:

                    /**
                     * 购买服务后获得的授权帐号，用于保证请求有效性
                     */
                    std::string m_pk;
                    bool m_pkHasBeenSet;

                    /**
                     * 需要获取分析结果的样本md5
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HABO_V20181203_MODEL_DESCRIBESTATUSREQUEST_H_
