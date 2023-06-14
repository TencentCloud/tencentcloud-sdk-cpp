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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_CLOUDVOD_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_CLOUDVOD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/TencentVod.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 点播相关参数。
                */
                class CloudVod : public AbstractModel
                {
                public:
                    CloudVod();
                    ~CloudVod() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取腾讯云点播相关参数。
                     * @return TencentVod 腾讯云点播相关参数。
                     * 
                     */
                    TencentVod GetTencentVod() const;

                    /**
                     * 设置腾讯云点播相关参数。
                     * @param _tencentVod 腾讯云点播相关参数。
                     * 
                     */
                    void SetTencentVod(const TencentVod& _tencentVod);

                    /**
                     * 判断参数 TencentVod 是否已赋值
                     * @return TencentVod 是否已赋值
                     * 
                     */
                    bool TencentVodHasBeenSet() const;

                private:

                    /**
                     * 腾讯云点播相关参数。
                     */
                    TencentVod m_tencentVod;
                    bool m_tencentVodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CLOUDVOD_H_
