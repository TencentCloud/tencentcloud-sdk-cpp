/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_SLICESTORAGEPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_SLICESTORAGEPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/CloudSliceStorage.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 切片存储参数
                */
                class SliceStorageParams : public AbstractModel
                {
                public:
                    SliceStorageParams();
                    ~SliceStorageParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取腾讯云对象存储COS以及第三方云存储的账号信息
                     * @return CloudSliceStorage 腾讯云对象存储COS以及第三方云存储的账号信息
                     * 
                     */
                    CloudSliceStorage GetCloudSliceStorage() const;

                    /**
                     * 设置腾讯云对象存储COS以及第三方云存储的账号信息
                     * @param _cloudSliceStorage 腾讯云对象存储COS以及第三方云存储的账号信息
                     * 
                     */
                    void SetCloudSliceStorage(const CloudSliceStorage& _cloudSliceStorage);

                    /**
                     * 判断参数 CloudSliceStorage 是否已赋值
                     * @return CloudSliceStorage 是否已赋值
                     * 
                     */
                    bool CloudSliceStorageHasBeenSet() const;

                private:

                    /**
                     * 腾讯云对象存储COS以及第三方云存储的账号信息
                     */
                    CloudSliceStorage m_cloudSliceStorage;
                    bool m_cloudSliceStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_SLICESTORAGEPARAMS_H_
