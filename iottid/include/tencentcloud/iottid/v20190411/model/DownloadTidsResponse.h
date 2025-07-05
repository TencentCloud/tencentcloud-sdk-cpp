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

#ifndef TENCENTCLOUD_IOTTID_V20190411_MODEL_DOWNLOADTIDSRESPONSE_H_
#define TENCENTCLOUD_IOTTID_V20190411_MODEL_DOWNLOADTIDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iottid/v20190411/model/TidKeysInfo.h>


namespace TencentCloud
{
    namespace Iottid
    {
        namespace V20190411
        {
            namespace Model
            {
                /**
                * DownloadTids返回参数结构体
                */
                class DownloadTidsResponse : public AbstractModel
                {
                public:
                    DownloadTidsResponse();
                    ~DownloadTidsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取下载的TID信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TidSet 下载的TID信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TidKeysInfo> GetTidSet() const;

                    /**
                     * 判断参数 TidSet 是否已赋值
                     * @return TidSet 是否已赋值
                     * 
                     */
                    bool TidSetHasBeenSet() const;

                private:

                    /**
                     * 下载的TID信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TidKeysInfo> m_tidSet;
                    bool m_tidSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTTID_V20190411_MODEL_DOWNLOADTIDSRESPONSE_H_
