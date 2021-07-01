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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTLABELBETARESPONSE_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTLABELBETARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiia/v20190529/model/DetectLabelItem.h>
#include <tencentcloud/tiia/v20190529/model/Product.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * DetectLabelBeta返回参数结构体
                */
                class DetectLabelBetaResponse : public AbstractModel
                {
                public:
                    DetectLabelBetaResponse();
                    ~DetectLabelBetaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Web网络版标签结果数组。如未选择WEB场景，则为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Labels Web网络版标签结果数组。如未选择WEB场景，则为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DetectLabelItem> GetLabels() const;

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取Camera摄像头版标签结果数组。如未选择CAMERA场景，则为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CameraLabels Camera摄像头版标签结果数组。如未选择CAMERA场景，则为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DetectLabelItem> GetCameraLabels() const;

                    /**
                     * 判断参数 CameraLabels 是否已赋值
                     * @return CameraLabels 是否已赋值
                     */
                    bool CameraLabelsHasBeenSet() const;

                    /**
                     * 获取Album相册版标签结果数组。如未选择ALBUM场景，则为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlbumLabels Album相册版标签结果数组。如未选择ALBUM场景，则为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DetectLabelItem> GetAlbumLabels() const;

                    /**
                     * 判断参数 AlbumLabels 是否已赋值
                     * @return AlbumLabels 是否已赋值
                     */
                    bool AlbumLabelsHasBeenSet() const;

                    /**
                     * 获取News新闻版标签结果数组。如未选择NEWS场景，则为空。
新闻版目前为测试阶段，暂不提供每个标签的一级、二级分类信息的输出。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NewsLabels News新闻版标签结果数组。如未选择NEWS场景，则为空。
新闻版目前为测试阶段，暂不提供每个标签的一级、二级分类信息的输出。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DetectLabelItem> GetNewsLabels() const;

                    /**
                     * 判断参数 NewsLabels 是否已赋值
                     * @return NewsLabels 是否已赋值
                     */
                    bool NewsLabelsHasBeenSet() const;

                    /**
                     * 获取非实拍标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoneCamLabels 非实拍标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DetectLabelItem> GetNoneCamLabels() const;

                    /**
                     * 判断参数 NoneCamLabels 是否已赋值
                     * @return NoneCamLabels 是否已赋值
                     */
                    bool NoneCamLabelsHasBeenSet() const;

                    /**
                     * 获取识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocationLabels 识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Product> GetLocationLabels() const;

                    /**
                     * 判断参数 LocationLabels 是否已赋值
                     * @return LocationLabels 是否已赋值
                     */
                    bool LocationLabelsHasBeenSet() const;

                private:

                    /**
                     * Web网络版标签结果数组。如未选择WEB场景，则为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DetectLabelItem> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Camera摄像头版标签结果数组。如未选择CAMERA场景，则为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DetectLabelItem> m_cameraLabels;
                    bool m_cameraLabelsHasBeenSet;

                    /**
                     * Album相册版标签结果数组。如未选择ALBUM场景，则为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DetectLabelItem> m_albumLabels;
                    bool m_albumLabelsHasBeenSet;

                    /**
                     * News新闻版标签结果数组。如未选择NEWS场景，则为空。
新闻版目前为测试阶段，暂不提供每个标签的一级、二级分类信息的输出。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DetectLabelItem> m_newsLabels;
                    bool m_newsLabelsHasBeenSet;

                    /**
                     * 非实拍标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DetectLabelItem> m_noneCamLabels;
                    bool m_noneCamLabelsHasBeenSet;

                    /**
                     * 识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Product> m_locationLabels;
                    bool m_locationLabelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTLABELBETARESPONSE_H_
