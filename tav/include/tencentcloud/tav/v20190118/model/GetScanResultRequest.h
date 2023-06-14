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

#ifndef TENCENTCLOUD_TAV_V20190118_MODEL_GETSCANRESULTREQUEST_H_
#define TENCENTCLOUD_TAV_V20190118_MODEL_GETSCANRESULTREQUEST_H_

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
                * GetScanResult请求参数结构体
                */
                class GetScanResultRequest : public AbstractModel
                {
                public:
                    GetScanResultRequest();
                    ~GetScanResultRequest() = default;
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
                     * 获取需要获取扫描接口的md5（只允许单个md5）
                     * @return Md5 需要获取扫描接口的md5（只允许单个md5）
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置需要获取扫描接口的md5（只允许单个md5）
                     * @param _md5 需要获取扫描接口的md5（只允许单个md5）
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
                     * 需要获取扫描接口的md5（只允许单个md5）
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAV_V20190118_MODEL_GETSCANRESULTREQUEST_H_
