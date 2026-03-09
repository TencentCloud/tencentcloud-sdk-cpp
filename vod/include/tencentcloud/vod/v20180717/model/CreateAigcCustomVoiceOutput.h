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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCCUSTOMVOICEOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCCUSTOMVOICEOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/CustomVoiceInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 创建自定义音色回调输出信息。
                */
                class CreateAigcCustomVoiceOutput : public AbstractModel
                {
                public:
                    CreateAigcCustomVoiceOutput();
                    ~CreateAigcCustomVoiceOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>自定义音色列表。</p>
                     * @return InfoList <p>自定义音色列表。</p>
                     * 
                     */
                    std::vector<CustomVoiceInfo> GetInfoList() const;

                    /**
                     * 设置<p>自定义音色列表。</p>
                     * @param _infoList <p>自定义音色列表。</p>
                     * 
                     */
                    void SetInfoList(const std::vector<CustomVoiceInfo>& _infoList);

                    /**
                     * 判断参数 InfoList 是否已赋值
                     * @return InfoList 是否已赋值
                     * 
                     */
                    bool InfoListHasBeenSet() const;

                private:

                    /**
                     * <p>自定义音色列表。</p>
                     */
                    std::vector<CustomVoiceInfo> m_infoList;
                    bool m_infoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCCUSTOMVOICEOUTPUT_H_
