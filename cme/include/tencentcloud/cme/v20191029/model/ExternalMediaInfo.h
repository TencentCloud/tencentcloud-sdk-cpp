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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_EXTERNALMEDIAINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_EXTERNALMEDIAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 媒资绑定资源信息，包含媒资绑定模板 ID 和文件信息。
                */
                class ExternalMediaInfo : public AbstractModel
                {
                public:
                    ExternalMediaInfo();
                    ~ExternalMediaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒资绑定模板 ID，可取值为：
<li>1000000：媒体文件为 URL，且 URL Scheme 为 https；</li>
<li>1000001：媒体文件为 URL，且 URL Scheme 为 http。</li>

注：如果要支持其它存储平台或者类型的媒体绑定，请联系 [客服](https://cloud.tencent.com/online-service?from=doc_1156)。
                     * @return Definition 媒资绑定模板 ID，可取值为：
<li>1000000：媒体文件为 URL，且 URL Scheme 为 https；</li>
<li>1000001：媒体文件为 URL，且 URL Scheme 为 http。</li>

注：如果要支持其它存储平台或者类型的媒体绑定，请联系 [客服](https://cloud.tencent.com/online-service?from=doc_1156)。
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置媒资绑定模板 ID，可取值为：
<li>1000000：媒体文件为 URL，且 URL Scheme 为 https；</li>
<li>1000001：媒体文件为 URL，且 URL Scheme 为 http。</li>

注：如果要支持其它存储平台或者类型的媒体绑定，请联系 [客服](https://cloud.tencent.com/online-service?from=doc_1156)。
                     * @param Definition 媒资绑定模板 ID，可取值为：
<li>1000000：媒体文件为 URL，且 URL Scheme 为 https；</li>
<li>1000001：媒体文件为 URL，且 URL Scheme 为 http。</li>

注：如果要支持其它存储平台或者类型的媒体绑定，请联系 [客服](https://cloud.tencent.com/online-service?from=doc_1156)。
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取媒资绑定媒体路径或文件 ID，如果要绑定 URL 类型的媒体，请将 URL 的 'https://' 或者 'http://' 去掉。
                     * @return MediaKey 媒资绑定媒体路径或文件 ID，如果要绑定 URL 类型的媒体，请将 URL 的 'https://' 或者 'http://' 去掉。
                     */
                    std::string GetMediaKey() const;

                    /**
                     * 设置媒资绑定媒体路径或文件 ID，如果要绑定 URL 类型的媒体，请将 URL 的 'https://' 或者 'http://' 去掉。
                     * @param MediaKey 媒资绑定媒体路径或文件 ID，如果要绑定 URL 类型的媒体，请将 URL 的 'https://' 或者 'http://' 去掉。
                     */
                    void SetMediaKey(const std::string& _mediaKey);

                    /**
                     * 判断参数 MediaKey 是否已赋值
                     * @return MediaKey 是否已赋值
                     */
                    bool MediaKeyHasBeenSet() const;

                private:

                    /**
                     * 媒资绑定模板 ID，可取值为：
<li>1000000：媒体文件为 URL，且 URL Scheme 为 https；</li>
<li>1000001：媒体文件为 URL，且 URL Scheme 为 http。</li>

注：如果要支持其它存储平台或者类型的媒体绑定，请联系 [客服](https://cloud.tencent.com/online-service?from=doc_1156)。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 媒资绑定媒体路径或文件 ID，如果要绑定 URL 类型的媒体，请将 URL 的 'https://' 或者 'http://' 去掉。
                     */
                    std::string m_mediaKey;
                    bool m_mediaKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_EXTERNALMEDIAINFO_H_
