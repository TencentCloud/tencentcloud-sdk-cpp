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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRISKINFOTOKENREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRISKINFOTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetFaceidRiskInfoToken请求参数结构体
                */
                class GetFaceidRiskInfoTokenRequest : public AbstractModel
                {
                public:
                    GetFaceidRiskInfoTokenRequest();
                    ~GetFaceidRiskInfoTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SDK中生成的Meta字符串。
                     * @return Meta SDK中生成的Meta字符串。
                     * 
                     */
                    std::string GetMeta() const;

                    /**
                     * 设置SDK中生成的Meta字符串。
                     * @param _meta SDK中生成的Meta字符串。
                     * 
                     */
                    void SetMeta(const std::string& _meta);

                    /**
                     * 判断参数 Meta 是否已赋值
                     * @return Meta 是否已赋值
                     * 
                     */
                    bool MetaHasBeenSet() const;

                    /**
                     * 获取透传参数 1000长度字符串。
                     * @return Extra 透传参数 1000长度字符串。
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置透传参数 1000长度字符串。
                     * @param _extra 透传参数 1000长度字符串。
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                private:

                    /**
                     * SDK中生成的Meta字符串。
                     */
                    std::string m_meta;
                    bool m_metaHasBeenSet;

                    /**
                     * 透传参数 1000长度字符串。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRISKINFOTOKENREQUEST_H_
