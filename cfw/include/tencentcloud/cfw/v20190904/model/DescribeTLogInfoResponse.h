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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBETLOGINFORESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBETLOGINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/TLogInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeTLogInfo返回参数结构体
                */
                class DescribeTLogInfoResponse : public AbstractModel
                {
                public:
                    DescribeTLogInfoResponse();
                    ~DescribeTLogInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取"NetworkNum":网络扫描探测
 "HandleNum": 待处理事件
"BanNum": 
  "VulNum": 漏洞利用
  "OutNum": 失陷主机
"BruteForceNum": 0
                     * @return Data "NetworkNum":网络扫描探测
 "HandleNum": 待处理事件
"BanNum": 
  "VulNum": 漏洞利用
  "OutNum": 失陷主机
"BruteForceNum": 0
                     * 
                     */
                    TLogInfo GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * "NetworkNum":网络扫描探测
 "HandleNum": 待处理事件
"BanNum": 
  "VulNum": 漏洞利用
  "OutNum": 失陷主机
"BruteForceNum": 0
                     */
                    TLogInfo m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBETLOGINFORESPONSE_H_
