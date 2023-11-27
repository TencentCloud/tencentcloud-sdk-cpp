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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETHARDWARELISTRESPONSE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETHARDWARELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mna/v20210119/model/HardwareInfo.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetHardwareList返回参数结构体
                */
                class GetHardwareListResponse : public AbstractModel
                {
                public:
                    GetHardwareListResponse();
                    ~GetHardwareListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取硬件信息列表
                     * @return HardwareInfos 硬件信息列表
                     * 
                     */
                    std::vector<HardwareInfo> GetHardwareInfos() const;

                    /**
                     * 判断参数 HardwareInfos 是否已赋值
                     * @return HardwareInfos 是否已赋值
                     * 
                     */
                    bool HardwareInfosHasBeenSet() const;

                    /**
                     * 获取硬件总数
                     * @return Length 硬件总数
                     * 
                     */
                    int64_t GetLength() const;

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                    /**
                     * 获取总页数
                     * @return TotalPage 总页数
                     * 
                     */
                    int64_t GetTotalPage() const;

                    /**
                     * 判断参数 TotalPage 是否已赋值
                     * @return TotalPage 是否已赋值
                     * 
                     */
                    bool TotalPageHasBeenSet() const;

                private:

                    /**
                     * 硬件信息列表
                     */
                    std::vector<HardwareInfo> m_hardwareInfos;
                    bool m_hardwareInfosHasBeenSet;

                    /**
                     * 硬件总数
                     */
                    int64_t m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * 总页数
                     */
                    int64_t m_totalPage;
                    bool m_totalPageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETHARDWARELISTRESPONSE_H_
