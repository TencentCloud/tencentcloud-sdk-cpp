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

#ifndef TENCENTCLOUD_TAV_V20190118_MODEL_SCANFILEHASHRESPONSE_H_
#define TENCENTCLOUD_TAV_V20190118_MODEL_SCANFILEHASHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tav
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * ScanFileHash返回参数结构体
                */
                class ScanFileHashResponse : public AbstractModel
                {
                public:
                    ScanFileHashResponse();
                    ~ScanFileHashResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取接口调用状态，成功返回200，失败返回400
                     * @return Status 接口调用状态，成功返回200，失败返回400
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取接口调用描述信息，成功返回"scan success"，失败返回"scan error"
                     * @return Info 接口调用描述信息，成功返回"scan success"，失败返回"scan error"
                     * 
                     */
                    std::string GetInfo() const;

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取云查实际结果信息，包括md5、return_state、virus_state、virus_name字符逗号间隔；        
return_state查询状态：-1/0代表失败、1/2代表成功；
virus_state文状件态：0文件不存在、1白、2黑、3未知、4感染性、5低可信白；
                     * @return Data 云查实际结果信息，包括md5、return_state、virus_state、virus_name字符逗号间隔；        
return_state查询状态：-1/0代表失败、1/2代表成功；
virus_state文状件态：0文件不存在、1白、2黑、3未知、4感染性、5低可信白；
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 接口调用状态，成功返回200，失败返回400
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 接口调用描述信息，成功返回"scan success"，失败返回"scan error"
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * 云查实际结果信息，包括md5、return_state、virus_state、virus_name字符逗号间隔；        
return_state查询状态：-1/0代表失败、1/2代表成功；
virus_state文状件态：0文件不存在、1白、2黑、3未知、4感染性、5低可信白；
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAV_V20190118_MODEL_SCANFILEHASHRESPONSE_H_
