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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TASKOUTPUTSTORAGE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TASKOUTPUTSTORAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/CosOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/S3OutputStorage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 媒体处理输出对象信息。
                */
                class TaskOutputStorage : public AbstractModel
                {
                public:
                    TaskOutputStorage();
                    ~TaskOutputStorage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒体处理输出对象存储位置的类型，支持：
<li>COS：COS存储</li>
<li>AWS-S3：AWS 存储，只适用于AWS任务，且要求同区域</li>
                     * @return Type 媒体处理输出对象存储位置的类型，支持：
<li>COS：COS存储</li>
<li>AWS-S3：AWS 存储，只适用于AWS任务，且要求同区域</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置媒体处理输出对象存储位置的类型，支持：
<li>COS：COS存储</li>
<li>AWS-S3：AWS 存储，只适用于AWS任务，且要求同区域</li>
                     * @param _type 媒体处理输出对象存储位置的类型，支持：
<li>COS：COS存储</li>
<li>AWS-S3：AWS 存储，只适用于AWS任务，且要求同区域</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取当 Type 为 COS 时有效，则该项为必填，表示媒体处理 COS 输出位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosOutputStorage 当 Type 为 COS 时有效，则该项为必填，表示媒体处理 COS 输出位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CosOutputStorage GetCosOutputStorage() const;

                    /**
                     * 设置当 Type 为 COS 时有效，则该项为必填，表示媒体处理 COS 输出位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosOutputStorage 当 Type 为 COS 时有效，则该项为必填，表示媒体处理 COS 输出位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosOutputStorage(const CosOutputStorage& _cosOutputStorage);

                    /**
                     * 判断参数 CosOutputStorage 是否已赋值
                     * @return CosOutputStorage 是否已赋值
                     * 
                     */
                    bool CosOutputStorageHasBeenSet() const;

                    /**
                     * 获取当 Type 为 AWS-S3 时有效，则该项为必填，表示媒体处理 AWS S3 输出位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return S3OutputStorage 当 Type 为 AWS-S3 时有效，则该项为必填，表示媒体处理 AWS S3 输出位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    S3OutputStorage GetS3OutputStorage() const;

                    /**
                     * 设置当 Type 为 AWS-S3 时有效，则该项为必填，表示媒体处理 AWS S3 输出位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _s3OutputStorage 当 Type 为 AWS-S3 时有效，则该项为必填，表示媒体处理 AWS S3 输出位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetS3OutputStorage(const S3OutputStorage& _s3OutputStorage);

                    /**
                     * 判断参数 S3OutputStorage 是否已赋值
                     * @return S3OutputStorage 是否已赋值
                     * 
                     */
                    bool S3OutputStorageHasBeenSet() const;

                private:

                    /**
                     * 媒体处理输出对象存储位置的类型，支持：
<li>COS：COS存储</li>
<li>AWS-S3：AWS 存储，只适用于AWS任务，且要求同区域</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 当 Type 为 COS 时有效，则该项为必填，表示媒体处理 COS 输出位置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosOutputStorage m_cosOutputStorage;
                    bool m_cosOutputStorageHasBeenSet;

                    /**
                     * 当 Type 为 AWS-S3 时有效，则该项为必填，表示媒体处理 AWS S3 输出位置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    S3OutputStorage m_s3OutputStorage;
                    bool m_s3OutputStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TASKOUTPUTSTORAGE_H_
