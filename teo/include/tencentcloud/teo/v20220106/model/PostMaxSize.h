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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_POSTMAXSIZE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_POSTMAXSIZE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * POST请求上传文件流式传输最大限制
                */
                class PostMaxSize : public AbstractModel
                {
                public:
                    PostMaxSize();
                    ~PostMaxSize() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是调整POST请求限制，平台默认为32MB。
关闭：off，
开启：on。
                     * @return Switch 是调整POST请求限制，平台默认为32MB。
关闭：off，
开启：on。
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置是调整POST请求限制，平台默认为32MB。
关闭：off，
开启：on。
                     * @param Switch 是调整POST请求限制，平台默认为32MB。
关闭：off，
开启：on。
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取最大限制，取值在1MB和500MB之间。单位字节
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxSize 最大限制，取值在1MB和500MB之间。单位字节
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMaxSize() const;

                    /**
                     * 设置最大限制，取值在1MB和500MB之间。单位字节
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxSize 最大限制，取值在1MB和500MB之间。单位字节
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxSize(const int64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     */
                    bool MaxSizeHasBeenSet() const;

                private:

                    /**
                     * 是调整POST请求限制，平台默认为32MB。
关闭：off，
开启：on。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 最大限制，取值在1MB和500MB之间。单位字节
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_POSTMAXSIZE_H_
