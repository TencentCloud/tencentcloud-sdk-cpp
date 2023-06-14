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

#ifndef TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBESUBPROJECTRESPONSE_H_
#define TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBESUBPROJECTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/solar/v20181011/model/ProductInfo.h>
#include <tencentcloud/solar/v20181011/model/ActivityInfo.h>


namespace TencentCloud
{
    namespace Solar
    {
        namespace V20181011
        {
            namespace Model
            {
                /**
                * DescribeSubProject返回参数结构体
                */
                class DescribeSubProjectResponse : public AbstractModel
                {
                public:
                    DescribeSubProjectResponse();
                    ~DescribeSubProjectResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取作品信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductInfo 作品信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ProductInfo GetProductInfo() const;

                    /**
                     * 判断参数 ProductInfo 是否已赋值
                     * @return ProductInfo 是否已赋值
                     * 
                     */
                    bool ProductInfoHasBeenSet() const;

                    /**
                     * 获取活动信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivityInfo 活动信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ActivityInfo GetActivityInfo() const;

                    /**
                     * 判断参数 ActivityInfo 是否已赋值
                     * @return ActivityInfo 是否已赋值
                     * 
                     */
                    bool ActivityInfoHasBeenSet() const;

                    /**
                     * 获取分享标题
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShareTitle 分享标题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShareTitle() const;

                    /**
                     * 判断参数 ShareTitle 是否已赋值
                     * @return ShareTitle 是否已赋值
                     * 
                     */
                    bool ShareTitleHasBeenSet() const;

                    /**
                     * 获取分享描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShareDesc 分享描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShareDesc() const;

                    /**
                     * 判断参数 ShareDesc 是否已赋值
                     * @return ShareDesc 是否已赋值
                     * 
                     */
                    bool ShareDescHasBeenSet() const;

                    /**
                     * 获取分享图标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShareImg 分享图标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShareImg() const;

                    /**
                     * 判断参数 ShareImg 是否已赋值
                     * @return ShareImg 是否已赋值
                     * 
                     */
                    bool ShareImgHasBeenSet() const;

                    /**
                     * 获取是否已创建策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasStrategy 是否已创建策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetHasStrategy() const;

                    /**
                     * 判断参数 HasStrategy 是否已赋值
                     * @return HasStrategy 是否已赋值
                     * 
                     */
                    bool HasStrategyHasBeenSet() const;

                    /**
                     * 获取子项目状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubProjectStatus 子项目状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubProjectStatus() const;

                    /**
                     * 判断参数 SubProjectStatus 是否已赋值
                     * @return SubProjectStatus 是否已赋值
                     * 
                     */
                    bool SubProjectStatusHasBeenSet() const;

                    /**
                     * 获取分享公众号的appId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShareAppId 分享公众号的appId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShareAppId() const;

                    /**
                     * 判断参数 ShareAppId 是否已赋值
                     * @return ShareAppId 是否已赋值
                     * 
                     */
                    bool ShareAppIdHasBeenSet() const;

                    /**
                     * 获取分享公众号的wsId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShareWsId 分享公众号的wsId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShareWsId() const;

                    /**
                     * 判断参数 ShareWsId 是否已赋值
                     * @return ShareWsId 是否已赋值
                     * 
                     */
                    bool ShareWsIdHasBeenSet() const;

                private:

                    /**
                     * 作品信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProductInfo m_productInfo;
                    bool m_productInfoHasBeenSet;

                    /**
                     * 活动信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ActivityInfo m_activityInfo;
                    bool m_activityInfoHasBeenSet;

                    /**
                     * 分享标题
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shareTitle;
                    bool m_shareTitleHasBeenSet;

                    /**
                     * 分享描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shareDesc;
                    bool m_shareDescHasBeenSet;

                    /**
                     * 分享图标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shareImg;
                    bool m_shareImgHasBeenSet;

                    /**
                     * 是否已创建策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_hasStrategy;
                    bool m_hasStrategyHasBeenSet;

                    /**
                     * 子项目状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subProjectStatus;
                    bool m_subProjectStatusHasBeenSet;

                    /**
                     * 分享公众号的appId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shareAppId;
                    bool m_shareAppIdHasBeenSet;

                    /**
                     * 分享公众号的wsId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shareWsId;
                    bool m_shareWsIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBESUBPROJECTRESPONSE_H_
