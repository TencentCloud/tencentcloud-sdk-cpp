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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_REGIONINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_REGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 可售卖地域信息
                */
                class RegionInfo : public AbstractModel
                {
                public:
                    RegionInfo();
                    ~RegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>地域编码，如 ap-chongqing</p>
                     * @return RegionCode <p>地域编码，如 ap-chongqing</p>
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置<p>地域编码，如 ap-chongqing</p>
                     * @param _regionCode <p>地域编码，如 ap-chongqing</p>
                     * 
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取<p>地域名称，如 重庆</p>
                     * @return RegionName <p>地域名称，如 重庆</p>
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置<p>地域名称，如 重庆</p>
                     * @param _regionName <p>地域名称，如 重庆</p>
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取<p>地域状态：AVAILABLE-可用，UNAVAILABLE-不可用</p>
                     * @return Status <p>地域状态：AVAILABLE-可用，UNAVAILABLE-不可用</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>地域状态：AVAILABLE-可用，UNAVAILABLE-不可用</p>
                     * @param _status <p>地域状态：AVAILABLE-可用，UNAVAILABLE-不可用</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>地域编码，如 ap-chongqing</p>
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * <p>地域名称，如 重庆</p>
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * <p>地域状态：AVAILABLE-可用，UNAVAILABLE-不可用</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_REGIONINFO_H_
