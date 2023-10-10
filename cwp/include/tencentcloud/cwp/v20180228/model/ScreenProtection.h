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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCREENPROTECTION_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCREENPROTECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 大屏可视化攻防状态
                */
                class ScreenProtection : public AbstractModel
                {
                public:
                    ScreenProtection();
                    ~ScreenProtection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型值：文件查杀，暴力破解，漏洞扫描，基线检测
                     * @return Name 类型值：文件查杀，暴力破解，漏洞扫描，基线检测
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置类型值：文件查杀，暴力破解，漏洞扫描，基线检测
                     * @param _name 类型值：文件查杀，暴力破解，漏洞扫描，基线检测
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取文件查杀:  0:从未检测过，或0资产付费情况, 1:已检测，存在恶意文件, 2:已检测，未开启隔离防护, 3:已检测且已开启防护且无风险；
暴力破解: 0:未开启防护（0付费资产情况）1:已开启自动阻断；
漏洞扫描: 0:从未检测过，或0资产付费情况, 1:存在漏洞风险, 2:无风险；
基线检测: 0:从未检测过，或0资产付费情况, 1:存在基线风险,2:无风险；
                     * @return Status 文件查杀:  0:从未检测过，或0资产付费情况, 1:已检测，存在恶意文件, 2:已检测，未开启隔离防护, 3:已检测且已开启防护且无风险；
暴力破解: 0:未开启防护（0付费资产情况）1:已开启自动阻断；
漏洞扫描: 0:从未检测过，或0资产付费情况, 1:存在漏洞风险, 2:无风险；
基线检测: 0:从未检测过，或0资产付费情况, 1:存在基线风险,2:无风险；
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置文件查杀:  0:从未检测过，或0资产付费情况, 1:已检测，存在恶意文件, 2:已检测，未开启隔离防护, 3:已检测且已开启防护且无风险；
暴力破解: 0:未开启防护（0付费资产情况）1:已开启自动阻断；
漏洞扫描: 0:从未检测过，或0资产付费情况, 1:存在漏洞风险, 2:无风险；
基线检测: 0:从未检测过，或0资产付费情况, 1:存在基线风险,2:无风险；
                     * @param _status 文件查杀:  0:从未检测过，或0资产付费情况, 1:已检测，存在恶意文件, 2:已检测，未开启隔离防护, 3:已检测且已开启防护且无风险；
暴力破解: 0:未开启防护（0付费资产情况）1:已开启自动阻断；
漏洞扫描: 0:从未检测过，或0资产付费情况, 1:存在漏洞风险, 2:无风险；
基线检测: 0:从未检测过，或0资产付费情况, 1:存在基线风险,2:无风险；
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 类型值：文件查杀，暴力破解，漏洞扫描，基线检测
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 文件查杀:  0:从未检测过，或0资产付费情况, 1:已检测，存在恶意文件, 2:已检测，未开启隔离防护, 3:已检测且已开启防护且无风险；
暴力破解: 0:未开启防护（0付费资产情况）1:已开启自动阻断；
漏洞扫描: 0:从未检测过，或0资产付费情况, 1:存在漏洞风险, 2:无风险；
基线检测: 0:从未检测过，或0资产付费情况, 1:存在基线风险,2:无风险；
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCREENPROTECTION_H_
