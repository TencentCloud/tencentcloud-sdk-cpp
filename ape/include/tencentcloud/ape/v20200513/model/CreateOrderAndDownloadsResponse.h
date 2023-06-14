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

#ifndef TENCENTCLOUD_APE_V20200513_MODEL_CREATEORDERANDDOWNLOADSRESPONSE_H_
#define TENCENTCLOUD_APE_V20200513_MODEL_CREATEORDERANDDOWNLOADSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ape/v20200513/model/DownloadInfo.h>


namespace TencentCloud
{
    namespace Ape
    {
        namespace V20200513
        {
            namespace Model
            {
                /**
                * CreateOrderAndDownloads返回参数结构体
                */
                class CreateOrderAndDownloadsResponse : public AbstractModel
                {
                public:
                    CreateOrderAndDownloadsResponse();
                    ~CreateOrderAndDownloadsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取成功核销后可以获取图片基本信息和原图地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownloadInfos 成功核销后可以获取图片基本信息和原图地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DownloadInfo> GetDownloadInfos() const;

                    /**
                     * 判断参数 DownloadInfos 是否已赋值
                     * @return DownloadInfos 是否已赋值
                     * 
                     */
                    bool DownloadInfosHasBeenSet() const;

                    /**
                     * 获取可下载图片数量
                     * @return TotalCount 可下载图片数量
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 成功核销后可以获取图片基本信息和原图地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DownloadInfo> m_downloadInfos;
                    bool m_downloadInfosHasBeenSet;

                    /**
                     * 可下载图片数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APE_V20200513_MODEL_CREATEORDERANDDOWNLOADSRESPONSE_H_
