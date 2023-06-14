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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_LISTFIRMWARESRESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_LISTFIRMWARESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20210408/model/FirmwareInfo.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * ListFirmwares返回参数结构体
                */
                class ListFirmwaresResponse : public AbstractModel
                {
                public:
                    ListFirmwaresResponse();
                    ~ListFirmwaresResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取固件总数
                     * @return TotalCount 固件总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取固件列表
                     * @return Firmwares 固件列表
                     * 
                     */
                    std::vector<FirmwareInfo> GetFirmwares() const;

                    /**
                     * 判断参数 Firmwares 是否已赋值
                     * @return Firmwares 是否已赋值
                     * 
                     */
                    bool FirmwaresHasBeenSet() const;

                private:

                    /**
                     * 固件总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 固件列表
                     */
                    std::vector<FirmwareInfo> m_firmwares;
                    bool m_firmwaresHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_LISTFIRMWARESRESPONSE_H_
