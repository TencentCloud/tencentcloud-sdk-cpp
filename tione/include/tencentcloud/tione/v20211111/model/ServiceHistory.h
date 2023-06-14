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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICEHISTORY_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICEHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 服务历史版本
                */
                class ServiceHistory : public AbstractModel
                {
                public:
                    ServiceHistory();
                    ~ServiceHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Revision 版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRevision() const;

                    /**
                     * 设置版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _revision 版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRevision(const std::string& _revision);

                    /**
                     * 判断参数 Revision 是否已赋值
                     * @return Revision 是否已赋值
                     * 
                     */
                    bool RevisionHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取镜像
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Image 镜像
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置镜像
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _image 镜像
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取模型文件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelFile 模型文件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelFile() const;

                    /**
                     * 设置模型文件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelFile 模型文件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelFile(const std::string& _modelFile);

                    /**
                     * 判断参数 ModelFile 是否已赋值
                     * @return ModelFile 是否已赋值
                     * 
                     */
                    bool ModelFileHasBeenSet() const;

                    /**
                     * 获取原始数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RawData 原始数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRawData() const;

                    /**
                     * 设置原始数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rawData 原始数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRawData(const std::string& _rawData);

                    /**
                     * 判断参数 RawData 是否已赋值
                     * @return RawData 是否已赋值
                     * 
                     */
                    bool RawDataHasBeenSet() const;

                private:

                    /**
                     * 版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_revision;
                    bool m_revisionHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 镜像
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 模型文件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelFile;
                    bool m_modelFileHasBeenSet;

                    /**
                     * 原始数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rawData;
                    bool m_rawDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICEHISTORY_H_
