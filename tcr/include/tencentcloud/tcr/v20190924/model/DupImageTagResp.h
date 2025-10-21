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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DUPIMAGETAGRESP_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DUPIMAGETAGRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 复制镜像tag返回值
                */
                class DupImageTagResp : public AbstractModel
                {
                public:
                    DupImageTagResp();
                    ~DupImageTagResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像Digest值
                     * @return Digest 镜像Digest值
                     * 
                     */
                    std::string GetDigest() const;

                    /**
                     * 设置镜像Digest值
                     * @param _digest 镜像Digest值
                     * 
                     */
                    void SetDigest(const std::string& _digest);

                    /**
                     * 判断参数 Digest 是否已赋值
                     * @return Digest 是否已赋值
                     * 
                     */
                    bool DigestHasBeenSet() const;

                private:

                    /**
                     * 镜像Digest值
                     */
                    std::string m_digest;
                    bool m_digestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DUPIMAGETAGRESP_H_
