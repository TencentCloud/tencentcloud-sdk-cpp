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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDEXTERNALPROMPTINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDEXTERNALPROMPTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 渠道扩展促销信息
                */
                class CloudExternalPromptInfo : public AbstractModel
                {
                public:
                    CloudExternalPromptInfo();
                    ~CloudExternalPromptInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取优惠商品信息类型。
                     * @return ExternalPromptType 优惠商品信息类型。
                     * 
                     */
                    std::string GetExternalPromptType() const;

                    /**
                     * 设置优惠商品信息类型。
                     * @param _externalPromptType 优惠商品信息类型。
                     * 
                     */
                    void SetExternalPromptType(const std::string& _externalPromptType);

                    /**
                     * 判断参数 ExternalPromptType 是否已赋值
                     * @return ExternalPromptType 是否已赋值
                     * 
                     */
                    bool ExternalPromptTypeHasBeenSet() const;

                    /**
                     * 获取优惠商品信息数据。
                     * @return ExternalPromptValue 优惠商品信息数据。
                     * 
                     */
                    std::string GetExternalPromptValue() const;

                    /**
                     * 设置优惠商品信息数据。
                     * @param _externalPromptValue 优惠商品信息数据。
                     * 
                     */
                    void SetExternalPromptValue(const std::string& _externalPromptValue);

                    /**
                     * 判断参数 ExternalPromptValue 是否已赋值
                     * @return ExternalPromptValue 是否已赋值
                     * 
                     */
                    bool ExternalPromptValueHasBeenSet() const;

                    /**
                     * 获取优惠商品名称。
                     * @return ExternalPromptName 优惠商品名称。
                     * 
                     */
                    std::string GetExternalPromptName() const;

                    /**
                     * 设置优惠商品名称。
                     * @param _externalPromptName 优惠商品名称。
                     * 
                     */
                    void SetExternalPromptName(const std::string& _externalPromptName);

                    /**
                     * 判断参数 ExternalPromptName 是否已赋值
                     * @return ExternalPromptName 是否已赋值
                     * 
                     */
                    bool ExternalPromptNameHasBeenSet() const;

                private:

                    /**
                     * 优惠商品信息类型。
                     */
                    std::string m_externalPromptType;
                    bool m_externalPromptTypeHasBeenSet;

                    /**
                     * 优惠商品信息数据。
                     */
                    std::string m_externalPromptValue;
                    bool m_externalPromptValueHasBeenSet;

                    /**
                     * 优惠商品名称。
                     */
                    std::string m_externalPromptName;
                    bool m_externalPromptNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDEXTERNALPROMPTINFO_H_
