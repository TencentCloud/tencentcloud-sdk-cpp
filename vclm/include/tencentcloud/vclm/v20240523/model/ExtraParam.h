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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_EXTRAPARAM_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_EXTRAPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * 扩展字段。
                */
                class ExtraParam : public AbstractModel
                {
                public:
                    ExtraParam();
                    ~ExtraParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取预签名的上传url，支持把视频直接传到客户指定的地址。
                     * @return UserDesignatedUrl 预签名的上传url，支持把视频直接传到客户指定的地址。
                     * 
                     */
                    std::string GetUserDesignatedUrl() const;

                    /**
                     * 设置预签名的上传url，支持把视频直接传到客户指定的地址。
                     * @param _userDesignatedUrl 预签名的上传url，支持把视频直接传到客户指定的地址。
                     * 
                     */
                    void SetUserDesignatedUrl(const std::string& _userDesignatedUrl);

                    /**
                     * 判断参数 UserDesignatedUrl 是否已赋值
                     * @return UserDesignatedUrl 是否已赋值
                     * 
                     */
                    bool UserDesignatedUrlHasBeenSet() const;

                private:

                    /**
                     * 预签名的上传url，支持把视频直接传到客户指定的地址。
                     */
                    std::string m_userDesignatedUrl;
                    bool m_userDesignatedUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_EXTRAPARAM_H_
