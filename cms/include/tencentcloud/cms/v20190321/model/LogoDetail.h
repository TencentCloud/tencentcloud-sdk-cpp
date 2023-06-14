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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_LOGODETAIL_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_LOGODETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cms/v20190321/model/Logo.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * Logo命中详情
                */
                class LogoDetail : public AbstractModel
                {
                public:
                    LogoDetail();
                    ~LogoDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命中的Applogo详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppLogoDetail 命中的Applogo详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Logo> GetAppLogoDetail() const;

                    /**
                     * 设置命中的Applogo详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appLogoDetail 命中的Applogo详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppLogoDetail(const std::vector<Logo>& _appLogoDetail);

                    /**
                     * 判断参数 AppLogoDetail 是否已赋值
                     * @return AppLogoDetail 是否已赋值
                     * 
                     */
                    bool AppLogoDetailHasBeenSet() const;

                private:

                    /**
                     * 命中的Applogo详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Logo> m_appLogoDetail;
                    bool m_appLogoDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_LOGODETAIL_H_
