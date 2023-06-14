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

#ifndef TENCENTCLOUD_DRM_V20181115_MODEL_DRMOUTPUTOBJECT_H_
#define TENCENTCLOUD_DRM_V20181115_MODEL_DRMOUTPUTOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/drm/v20181115/model/DrmOutputPara.h>


namespace TencentCloud
{
    namespace Drm
    {
        namespace V20181115
        {
            namespace Model
            {
                /**
                * DRM加密后的输出对象
                */
                class DrmOutputObject : public AbstractModel
                {
                public:
                    DrmOutputObject();
                    ~DrmOutputObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输出的桶名称。
                     * @return BucketName 输出的桶名称。
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置输出的桶名称。
                     * @param _bucketName 输出的桶名称。
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取输出的对象名称。
                     * @return ObjectName 输出的对象名称。
                     * 
                     */
                    std::string GetObjectName() const;

                    /**
                     * 设置输出的对象名称。
                     * @param _objectName 输出的对象名称。
                     * 
                     */
                    void SetObjectName(const std::string& _objectName);

                    /**
                     * 判断参数 ObjectName 是否已赋值
                     * @return ObjectName 是否已赋值
                     * 
                     */
                    bool ObjectNameHasBeenSet() const;

                    /**
                     * 获取输出对象参数。
                     * @return Para 输出对象参数。
                     * 
                     */
                    DrmOutputPara GetPara() const;

                    /**
                     * 设置输出对象参数。
                     * @param _para 输出对象参数。
                     * 
                     */
                    void SetPara(const DrmOutputPara& _para);

                    /**
                     * 判断参数 Para 是否已赋值
                     * @return Para 是否已赋值
                     * 
                     */
                    bool ParaHasBeenSet() const;

                private:

                    /**
                     * 输出的桶名称。
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 输出的对象名称。
                     */
                    std::string m_objectName;
                    bool m_objectNameHasBeenSet;

                    /**
                     * 输出对象参数。
                     */
                    DrmOutputPara m_para;
                    bool m_paraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DRM_V20181115_MODEL_DRMOUTPUTOBJECT_H_
