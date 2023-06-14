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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_MEDIACUTTINGTASKRESULT_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_MEDIACUTTINGTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/TaskResultFile.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 编辑处理/剪切任务/处理结果
                */
                class MediaCuttingTaskResult : public AbstractModel
                {
                public:
                    MediaCuttingTaskResult();
                    ~MediaCuttingTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取如果ResultListType不为NoListFile时，结果（TaskResultFile）列表文件的存储位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ListFile 如果ResultListType不为NoListFile时，结果（TaskResultFile）列表文件的存储位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskResultFile GetListFile() const;

                    /**
                     * 设置如果ResultListType不为NoListFile时，结果（TaskResultFile）列表文件的存储位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _listFile 如果ResultListType不为NoListFile时，结果（TaskResultFile）列表文件的存储位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetListFile(const TaskResultFile& _listFile);

                    /**
                     * 判断参数 ListFile 是否已赋值
                     * @return ListFile 是否已赋值
                     * 
                     */
                    bool ListFileHasBeenSet() const;

                    /**
                     * 获取结果个数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultCount 结果个数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetResultCount() const;

                    /**
                     * 设置结果个数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultCount 结果个数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResultCount(const int64_t& _resultCount);

                    /**
                     * 判断参数 ResultCount 是否已赋值
                     * @return ResultCount 是否已赋值
                     * 
                     */
                    bool ResultCountHasBeenSet() const;

                    /**
                     * 获取第一个结果文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstFile 第一个结果文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskResultFile GetFirstFile() const;

                    /**
                     * 设置第一个结果文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstFile 第一个结果文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFirstFile(const TaskResultFile& _firstFile);

                    /**
                     * 判断参数 FirstFile 是否已赋值
                     * @return FirstFile 是否已赋值
                     * 
                     */
                    bool FirstFileHasBeenSet() const;

                    /**
                     * 获取最后一个结果文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastFile 最后一个结果文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskResultFile GetLastFile() const;

                    /**
                     * 设置最后一个结果文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastFile 最后一个结果文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastFile(const TaskResultFile& _lastFile);

                    /**
                     * 判断参数 LastFile 是否已赋值
                     * @return LastFile 是否已赋值
                     * 
                     */
                    bool LastFileHasBeenSet() const;

                    /**
                     * 获取任务结果包含的图片总数。
静态图：总数即为文件数；
雪碧图：所有小图总数；
动图、视频：不计算图片数，为 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageCount 任务结果包含的图片总数。
静态图：总数即为文件数；
雪碧图：所有小图总数；
动图、视频：不计算图片数，为 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetImageCount() const;

                    /**
                     * 设置任务结果包含的图片总数。
静态图：总数即为文件数；
雪碧图：所有小图总数；
动图、视频：不计算图片数，为 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageCount 任务结果包含的图片总数。
静态图：总数即为文件数；
雪碧图：所有小图总数；
动图、视频：不计算图片数，为 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageCount(const int64_t& _imageCount);

                    /**
                     * 判断参数 ImageCount 是否已赋值
                     * @return ImageCount 是否已赋值
                     * 
                     */
                    bool ImageCountHasBeenSet() const;

                private:

                    /**
                     * 如果ResultListType不为NoListFile时，结果（TaskResultFile）列表文件的存储位置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskResultFile m_listFile;
                    bool m_listFileHasBeenSet;

                    /**
                     * 结果个数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_resultCount;
                    bool m_resultCountHasBeenSet;

                    /**
                     * 第一个结果文件。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskResultFile m_firstFile;
                    bool m_firstFileHasBeenSet;

                    /**
                     * 最后一个结果文件。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskResultFile m_lastFile;
                    bool m_lastFileHasBeenSet;

                    /**
                     * 任务结果包含的图片总数。
静态图：总数即为文件数；
雪碧图：所有小图总数；
动图、视频：不计算图片数，为 0。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_imageCount;
                    bool m_imageCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_MEDIACUTTINGTASKRESULT_H_
