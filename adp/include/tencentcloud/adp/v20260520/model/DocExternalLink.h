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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DOCEXTERNALLINK_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DOCEXTERNALLINK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 文档外部链接信息
                */
                class DocExternalLink : public AbstractModel
                {
                public:
                    DocExternalLink();
                    ~DocExternalLink() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>外部链接地址</p>
                     * @return ExternalUrl <p>外部链接地址</p>
                     * 
                     */
                    std::string GetExternalUrl() const;

                    /**
                     * 设置<p>外部链接地址</p>
                     * @param _externalUrl <p>外部链接地址</p>
                     * 
                     */
                    void SetExternalUrl(const std::string& _externalUrl);

                    /**
                     * 判断参数 ExternalUrl 是否已赋值
                     * @return ExternalUrl 是否已赋值
                     * 
                     */
                    bool ExternalUrlHasBeenSet() const;

                    /**
                     * 获取<p>是否替换原文展示</p>
                     * @return ReplaceOriginEnabled <p>是否替换原文展示</p>
                     * 
                     */
                    bool GetReplaceOriginEnabled() const;

                    /**
                     * 设置<p>是否替换原文展示</p>
                     * @param _replaceOriginEnabled <p>是否替换原文展示</p>
                     * 
                     */
                    void SetReplaceOriginEnabled(const bool& _replaceOriginEnabled);

                    /**
                     * 判断参数 ReplaceOriginEnabled 是否已赋值
                     * @return ReplaceOriginEnabled 是否已赋值
                     * 
                     */
                    bool ReplaceOriginEnabledHasBeenSet() const;

                private:

                    /**
                     * <p>外部链接地址</p>
                     */
                    std::string m_externalUrl;
                    bool m_externalUrlHasBeenSet;

                    /**
                     * <p>是否替换原文展示</p>
                     */
                    bool m_replaceOriginEnabled;
                    bool m_replaceOriginEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DOCEXTERNALLINK_H_
