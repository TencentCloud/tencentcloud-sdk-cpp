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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DOCSWITCH_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DOCSWITCH_H_

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
                * 文档开关配置
                */
                class DocSwitch : public AbstractModel
                {
                public:
                    DocSwitch();
                    ~DocSwitch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否可下载</p>
                     * @return DownloadEnabled <p>是否可下载</p>
                     * 
                     */
                    bool GetDownloadEnabled() const;

                    /**
                     * 设置<p>是否可下载</p>
                     * @param _downloadEnabled <p>是否可下载</p>
                     * 
                     */
                    void SetDownloadEnabled(const bool& _downloadEnabled);

                    /**
                     * 判断参数 DownloadEnabled 是否已赋值
                     * @return DownloadEnabled 是否已赋值
                     * 
                     */
                    bool DownloadEnabledHasBeenSet() const;

                    /**
                     * 获取<p>是否在参考来源中展示</p>
                     * @return ReferEnabled <p>是否在参考来源中展示</p>
                     * 
                     */
                    bool GetReferEnabled() const;

                    /**
                     * 设置<p>是否在参考来源中展示</p>
                     * @param _referEnabled <p>是否在参考来源中展示</p>
                     * 
                     */
                    void SetReferEnabled(const bool& _referEnabled);

                    /**
                     * 判断参数 ReferEnabled 是否已赋值
                     * @return ReferEnabled 是否已赋值
                     * 
                     */
                    bool ReferEnabledHasBeenSet() const;

                private:

                    /**
                     * <p>是否可下载</p>
                     */
                    bool m_downloadEnabled;
                    bool m_downloadEnabledHasBeenSet;

                    /**
                     * <p>是否在参考来源中展示</p>
                     */
                    bool m_referEnabled;
                    bool m_referEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DOCSWITCH_H_
