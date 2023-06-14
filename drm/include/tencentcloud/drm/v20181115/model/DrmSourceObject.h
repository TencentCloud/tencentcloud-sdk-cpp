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

#ifndef TENCENTCLOUD_DRM_V20181115_MODEL_DRMSOURCEOBJECT_H_
#define TENCENTCLOUD_DRM_V20181115_MODEL_DRMSOURCEOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Drm
    {
        namespace V20181115
        {
            namespace Model
            {
                /**
                * 用于DRM加密的源对象
                */
                class DrmSourceObject : public AbstractModel
                {
                public:
                    DrmSourceObject();
                    ~DrmSourceObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入的桶名称。
                     * @return BucketName 输入的桶名称。
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置输入的桶名称。
                     * @param _bucketName 输入的桶名称。
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
                     * 获取输入对象名称。
                     * @return ObjectName 输入对象名称。
                     * 
                     */
                    std::string GetObjectName() const;

                    /**
                     * 设置输入对象名称。
                     * @param _objectName 输入对象名称。
                     * 
                     */
                    void SetObjectName(const std::string& _objectName);

                    /**
                     * 判断参数 ObjectName 是否已赋值
                     * @return ObjectName 是否已赋值
                     * 
                     */
                    bool ObjectNameHasBeenSet() const;

                private:

                    /**
                     * 输入的桶名称。
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 输入对象名称。
                     */
                    std::string m_objectName;
                    bool m_objectNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DRM_V20181115_MODEL_DRMSOURCEOBJECT_H_
