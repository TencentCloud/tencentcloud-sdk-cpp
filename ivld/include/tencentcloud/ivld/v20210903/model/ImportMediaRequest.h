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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_IMPORTMEDIAREQUEST_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_IMPORTMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * ImportMedia请求参数结构体
                */
                class ImportMediaRequest : public AbstractModel
                {
                public:
                    ImportMediaRequest();
                    ~ImportMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待分析视频的URL，目前只支持*不带签名的*COS地址，长度最长1KB
                     * @return URL 待分析视频的URL，目前只支持*不带签名的*COS地址，长度最长1KB
                     */
                    std::string GetURL() const;

                    /**
                     * 设置待分析视频的URL，目前只支持*不带签名的*COS地址，长度最长1KB
                     * @param URL 待分析视频的URL，目前只支持*不带签名的*COS地址，长度最长1KB
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取待分析视频的MD5，为空时不做校验，否则会做MD5校验，长度必须为32B
                     * @return MD5 待分析视频的MD5，为空时不做校验，否则会做MD5校验，长度必须为32B
                     */
                    std::string GetMD5() const;

                    /**
                     * 设置待分析视频的MD5，为空时不做校验，否则会做MD5校验，长度必须为32B
                     * @param MD5 待分析视频的MD5，为空时不做校验，否则会做MD5校验，长度必须为32B
                     */
                    void SetMD5(const std::string& _mD5);

                    /**
                     * 判断参数 MD5 是否已赋值
                     * @return MD5 是否已赋值
                     */
                    bool MD5HasBeenSet() const;

                    /**
                     * 获取待分析视频的名称，指定后可支持筛选，最多100个中文字符
                     * @return Name 待分析视频的名称，指定后可支持筛选，最多100个中文字符
                     */
                    std::string GetName() const;

                    /**
                     * 设置待分析视频的名称，指定后可支持筛选，最多100个中文字符
                     * @param Name 待分析视频的名称，指定后可支持筛选，最多100个中文字符
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 待分析视频的URL，目前只支持*不带签名的*COS地址，长度最长1KB
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * 待分析视频的MD5，为空时不做校验，否则会做MD5校验，长度必须为32B
                     */
                    std::string m_mD5;
                    bool m_mD5HasBeenSet;

                    /**
                     * 待分析视频的名称，指定后可支持筛选，最多100个中文字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_IMPORTMEDIAREQUEST_H_
