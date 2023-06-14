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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CREATEEDGEPACKTASKREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CREATEEDGEPACKTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * CreateEdgePackTask请求参数结构体
                */
                class CreateEdgePackTaskRequest : public AbstractModel
                {
                public:
                    CreateEdgePackTaskRequest();
                    ~CreateEdgePackTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取apk 所在的 cos 存储桶, 如 edgepack-xxxxxxxx
                     * @return CosBucket apk 所在的 cos 存储桶, 如 edgepack-xxxxxxxx
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置apk 所在的 cos 存储桶, 如 edgepack-xxxxxxxx
                     * @param _cosBucket apk 所在的 cos 存储桶, 如 edgepack-xxxxxxxx
                     * 
                     */
                    void SetCosBucket(const std::string& _cosBucket);

                    /**
                     * 判断参数 CosBucket 是否已赋值
                     * @return CosBucket 是否已赋值
                     * 
                     */
                    bool CosBucketHasBeenSet() const;

                    /**
                     * 获取apk 源文件的存储路径, 如 /apk/xxxx.apk
                     * @return CosUriFrom apk 源文件的存储路径, 如 /apk/xxxx.apk
                     * 
                     */
                    std::string GetCosUriFrom() const;

                    /**
                     * 设置apk 源文件的存储路径, 如 /apk/xxxx.apk
                     * @param _cosUriFrom apk 源文件的存储路径, 如 /apk/xxxx.apk
                     * 
                     */
                    void SetCosUriFrom(const std::string& _cosUriFrom);

                    /**
                     * 判断参数 CosUriFrom 是否已赋值
                     * @return CosUriFrom 是否已赋值
                     * 
                     */
                    bool CosUriFromHasBeenSet() const;

                    /**
                     * 获取BlockID 的值, WALLE为1903654775(0x71777777)，VasDolly为2282837503(0x881155ff),传0或不传时默认为 WALLE 方案
                     * @return BlockID BlockID 的值, WALLE为1903654775(0x71777777)，VasDolly为2282837503(0x881155ff),传0或不传时默认为 WALLE 方案
                     * 
                     */
                    uint64_t GetBlockID() const;

                    /**
                     * 设置BlockID 的值, WALLE为1903654775(0x71777777)，VasDolly为2282837503(0x881155ff),传0或不传时默认为 WALLE 方案
                     * @param _blockID BlockID 的值, WALLE为1903654775(0x71777777)，VasDolly为2282837503(0x881155ff),传0或不传时默认为 WALLE 方案
                     * 
                     */
                    void SetBlockID(const uint64_t& _blockID);

                    /**
                     * 判断参数 BlockID 是否已赋值
                     * @return BlockID 是否已赋值
                     * 
                     */
                    bool BlockIDHasBeenSet() const;

                    /**
                     * 获取拓展之后的 apk 目标存储路径,如 /out/xxxx.apk
                     * @return CosUriTo 拓展之后的 apk 目标存储路径,如 /out/xxxx.apk
                     * 
                     */
                    std::string GetCosUriTo() const;

                    /**
                     * 设置拓展之后的 apk 目标存储路径,如 /out/xxxx.apk
                     * @param _cosUriTo 拓展之后的 apk 目标存储路径,如 /out/xxxx.apk
                     * 
                     */
                    void SetCosUriTo(const std::string& _cosUriTo);

                    /**
                     * 判断参数 CosUriTo 是否已赋值
                     * @return CosUriTo 是否已赋值
                     * 
                     */
                    bool CosUriToHasBeenSet() const;

                private:

                    /**
                     * apk 所在的 cos 存储桶, 如 edgepack-xxxxxxxx
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * apk 源文件的存储路径, 如 /apk/xxxx.apk
                     */
                    std::string m_cosUriFrom;
                    bool m_cosUriFromHasBeenSet;

                    /**
                     * BlockID 的值, WALLE为1903654775(0x71777777)，VasDolly为2282837503(0x881155ff),传0或不传时默认为 WALLE 方案
                     */
                    uint64_t m_blockID;
                    bool m_blockIDHasBeenSet;

                    /**
                     * 拓展之后的 apk 目标存储路径,如 /out/xxxx.apk
                     */
                    std::string m_cosUriTo;
                    bool m_cosUriToHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CREATEEDGEPACKTASKREQUEST_H_
