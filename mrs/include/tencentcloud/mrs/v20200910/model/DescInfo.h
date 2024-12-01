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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_DESCINFO_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_DESCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/BaseInfo.h>
#include <tencentcloud/mrs/v20200910/model/DetailInformation.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 描述段落
                */
                class DescInfo : public AbstractModel
                {
                public:
                    DescInfo();
                    ~DescInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取描述段落文本
                     * @return Text 描述段落文本
                     * 
                     */
                    BaseInfo GetText() const;

                    /**
                     * 设置描述段落文本
                     * @param _text 描述段落文本
                     * 
                     */
                    void SetText(const BaseInfo& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取描述段落详情
                     * @return Infos 描述段落详情
                     * 
                     */
                    std::vector<DetailInformation> GetInfos() const;

                    /**
                     * 设置描述段落详情
                     * @param _infos 描述段落详情
                     * 
                     */
                    void SetInfos(const std::vector<DetailInformation>& _infos);

                    /**
                     * 判断参数 Infos 是否已赋值
                     * @return Infos 是否已赋值
                     * 
                     */
                    bool InfosHasBeenSet() const;

                private:

                    /**
                     * 描述段落文本
                     */
                    BaseInfo m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 描述段落详情
                     */
                    std::vector<DetailInformation> m_infos;
                    bool m_infosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_DESCINFO_H_
