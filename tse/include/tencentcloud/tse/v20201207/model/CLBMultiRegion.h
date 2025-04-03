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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLBMULTIREGION_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLBMULTIREGION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * CLB多可用区信息
                */
                class CLBMultiRegion : public AbstractModel
                {
                public:
                    CLBMultiRegion();
                    ~CLBMultiRegion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否启用多可用区
                     * @return CLBMultiZoneFlag 是否启用多可用区
                     * 
                     */
                    bool GetCLBMultiZoneFlag() const;

                    /**
                     * 设置是否启用多可用区
                     * @param _cLBMultiZoneFlag 是否启用多可用区
                     * 
                     */
                    void SetCLBMultiZoneFlag(const bool& _cLBMultiZoneFlag);

                    /**
                     * 判断参数 CLBMultiZoneFlag 是否已赋值
                     * @return CLBMultiZoneFlag 是否已赋值
                     * 
                     */
                    bool CLBMultiZoneFlagHasBeenSet() const;

                    /**
                     * 获取主可用区信息
                     * @return CLBMasterZone 主可用区信息
                     * 
                     */
                    std::string GetCLBMasterZone() const;

                    /**
                     * 设置主可用区信息
                     * @param _cLBMasterZone 主可用区信息
                     * 
                     */
                    void SetCLBMasterZone(const std::string& _cLBMasterZone);

                    /**
                     * 判断参数 CLBMasterZone 是否已赋值
                     * @return CLBMasterZone 是否已赋值
                     * 
                     */
                    bool CLBMasterZoneHasBeenSet() const;

                    /**
                     * 获取备可用区信息
                     * @return CLBSlaveZone 备可用区信息
                     * 
                     */
                    std::string GetCLBSlaveZone() const;

                    /**
                     * 设置备可用区信息
                     * @param _cLBSlaveZone 备可用区信息
                     * 
                     */
                    void SetCLBSlaveZone(const std::string& _cLBSlaveZone);

                    /**
                     * 判断参数 CLBSlaveZone 是否已赋值
                     * @return CLBSlaveZone 是否已赋值
                     * 
                     */
                    bool CLBSlaveZoneHasBeenSet() const;

                private:

                    /**
                     * 是否启用多可用区
                     */
                    bool m_cLBMultiZoneFlag;
                    bool m_cLBMultiZoneFlagHasBeenSet;

                    /**
                     * 主可用区信息
                     */
                    std::string m_cLBMasterZone;
                    bool m_cLBMasterZoneHasBeenSet;

                    /**
                     * 备可用区信息
                     */
                    std::string m_cLBSlaveZone;
                    bool m_cLBSlaveZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLBMULTIREGION_H_
