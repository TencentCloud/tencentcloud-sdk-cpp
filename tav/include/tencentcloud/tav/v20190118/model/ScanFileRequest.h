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

#ifndef TENCENTCLOUD_TAV_V20190118_MODEL_SCANFILEREQUEST_H_
#define TENCENTCLOUD_TAV_V20190118_MODEL_SCANFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tav
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * ScanFile请求参数结构体
                */
                class ScanFileRequest : public AbstractModel
                {
                public:
                    ScanFileRequest();
                    ~ScanFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取购买服务后获得的授权信息，用于保证请求有效性
                     * @return Key 购买服务后获得的授权信息，用于保证请求有效性
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置购买服务后获得的授权信息，用于保证请求有效性
                     * @param _key 购买服务后获得的授权信息，用于保证请求有效性
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取文件下载url地址
                     * @return Sample 文件下载url地址
                     * 
                     */
                    std::string GetSample() const;

                    /**
                     * 设置文件下载url地址
                     * @param _sample 文件下载url地址
                     * 
                     */
                    void SetSample(const std::string& _sample);

                    /**
                     * 判断参数 Sample 是否已赋值
                     * @return Sample 是否已赋值
                     * 
                     */
                    bool SampleHasBeenSet() const;

                    /**
                     * 获取文件的md5值
                     * @return Md5 文件的md5值
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置文件的md5值
                     * @param _md5 文件的md5值
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
                     * 购买服务后获得的授权信息，用于保证请求有效性
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 文件下载url地址
                     */
                    std::string m_sample;
                    bool m_sampleHasBeenSet;

                    /**
                     * 文件的md5值
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAV_V20190118_MODEL_SCANFILEREQUEST_H_
