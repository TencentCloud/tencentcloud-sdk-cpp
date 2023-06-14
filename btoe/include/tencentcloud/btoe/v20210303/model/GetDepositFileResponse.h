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

#ifndef TENCENTCLOUD_BTOE_V20210303_MODEL_GETDEPOSITFILERESPONSE_H_
#define TENCENTCLOUD_BTOE_V20210303_MODEL_GETDEPOSITFILERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Btoe
    {
        namespace V20210303
        {
            namespace Model
            {
                /**
                * GetDepositFile返回参数结构体
                */
                class GetDepositFileResponse : public AbstractModel
                {
                public:
                    GetDepositFileResponse();
                    ~GetDepositFileResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取存证编号
                     * @return EvidenceId 存证编号
                     * 
                     */
                    std::string GetEvidenceId() const;

                    /**
                     * 判断参数 EvidenceId 是否已赋值
                     * @return EvidenceId 是否已赋值
                     * 
                     */
                    bool EvidenceIdHasBeenSet() const;

                    /**
                     * 获取存证文件临时链接
                     * @return EvidenceFile 存证文件临时链接
                     * 
                     */
                    std::string GetEvidenceFile() const;

                    /**
                     * 判断参数 EvidenceFile 是否已赋值
                     * @return EvidenceFile 是否已赋值
                     * 
                     */
                    bool EvidenceFileHasBeenSet() const;

                private:

                    /**
                     * 存证编号
                     */
                    std::string m_evidenceId;
                    bool m_evidenceIdHasBeenSet;

                    /**
                     * 存证文件临时链接
                     */
                    std::string m_evidenceFile;
                    bool m_evidenceFileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BTOE_V20210303_MODEL_GETDEPOSITFILERESPONSE_H_
