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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_IMAGEOPTIMIZATION_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_IMAGEOPTIMIZATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/WebpAdapter.h>
#include <tencentcloud/cdn/v20180606/model/TpgAdapter.h>
#include <tencentcloud/cdn/v20180606/model/GuetzliAdapter.h>
#include <tencentcloud/cdn/v20180606/model/AvifAdapter.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * ImageOptimization配置
                */
                class ImageOptimization : public AbstractModel
                {
                public:
                    ImageOptimization();
                    ~ImageOptimization() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取WebpAdapter配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebpAdapter WebpAdapter配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WebpAdapter GetWebpAdapter() const;

                    /**
                     * 设置WebpAdapter配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webpAdapter WebpAdapter配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebpAdapter(const WebpAdapter& _webpAdapter);

                    /**
                     * 判断参数 WebpAdapter 是否已赋值
                     * @return WebpAdapter 是否已赋值
                     * 
                     */
                    bool WebpAdapterHasBeenSet() const;

                    /**
                     * 获取TpgAdapter配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TpgAdapter TpgAdapter配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TpgAdapter GetTpgAdapter() const;

                    /**
                     * 设置TpgAdapter配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tpgAdapter TpgAdapter配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTpgAdapter(const TpgAdapter& _tpgAdapter);

                    /**
                     * 判断参数 TpgAdapter 是否已赋值
                     * @return TpgAdapter 是否已赋值
                     * 
                     */
                    bool TpgAdapterHasBeenSet() const;

                    /**
                     * 获取GuetzliAdapter配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GuetzliAdapter GuetzliAdapter配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GuetzliAdapter GetGuetzliAdapter() const;

                    /**
                     * 设置GuetzliAdapter配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _guetzliAdapter GuetzliAdapter配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGuetzliAdapter(const GuetzliAdapter& _guetzliAdapter);

                    /**
                     * 判断参数 GuetzliAdapter 是否已赋值
                     * @return GuetzliAdapter 是否已赋值
                     * 
                     */
                    bool GuetzliAdapterHasBeenSet() const;

                    /**
                     * 获取AvifAdapter配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvifAdapter AvifAdapter配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AvifAdapter GetAvifAdapter() const;

                    /**
                     * 设置AvifAdapter配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _avifAdapter AvifAdapter配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvifAdapter(const AvifAdapter& _avifAdapter);

                    /**
                     * 判断参数 AvifAdapter 是否已赋值
                     * @return AvifAdapter 是否已赋值
                     * 
                     */
                    bool AvifAdapterHasBeenSet() const;

                private:

                    /**
                     * WebpAdapter配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WebpAdapter m_webpAdapter;
                    bool m_webpAdapterHasBeenSet;

                    /**
                     * TpgAdapter配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TpgAdapter m_tpgAdapter;
                    bool m_tpgAdapterHasBeenSet;

                    /**
                     * GuetzliAdapter配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GuetzliAdapter m_guetzliAdapter;
                    bool m_guetzliAdapterHasBeenSet;

                    /**
                     * AvifAdapter配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AvifAdapter m_avifAdapter;
                    bool m_avifAdapterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_IMAGEOPTIMIZATION_H_
