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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_RUMAREAINFO_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_RUMAREAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * Rum片区信息
                */
                class RumAreaInfo : public AbstractModel
                {
                public:
                    RumAreaInfo();
                    ~RumAreaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取片区Id
                     * @return AreaId 片区Id
                     * 
                     */
                    int64_t GetAreaId() const;

                    /**
                     * 设置片区Id
                     * @param _areaId 片区Id
                     * 
                     */
                    void SetAreaId(const int64_t& _areaId);

                    /**
                     * 判断参数 AreaId 是否已赋值
                     * @return AreaId 是否已赋值
                     * 
                     */
                    bool AreaIdHasBeenSet() const;

                    /**
                     * 获取片区状态(1=有效，2=无效)
                     * @return AreaStatus 片区状态(1=有效，2=无效)
                     * 
                     */
                    int64_t GetAreaStatus() const;

                    /**
                     * 设置片区状态(1=有效，2=无效)
                     * @param _areaStatus 片区状态(1=有效，2=无效)
                     * 
                     */
                    void SetAreaStatus(const int64_t& _areaStatus);

                    /**
                     * 判断参数 AreaStatus 是否已赋值
                     * @return AreaStatus 是否已赋值
                     * 
                     */
                    bool AreaStatusHasBeenSet() const;

                    /**
                     * 获取片区名称
                     * @return AreaName 片区名称
                     * 
                     */
                    std::string GetAreaName() const;

                    /**
                     * 设置片区名称
                     * @param _areaName 片区名称
                     * 
                     */
                    void SetAreaName(const std::string& _areaName);

                    /**
                     * 判断参数 AreaName 是否已赋值
                     * @return AreaName 是否已赋值
                     * 
                     */
                    bool AreaNameHasBeenSet() const;

                    /**
                     * 获取片区Key
                     * @return AreaKey 片区Key
                     * 
                     */
                    std::string GetAreaKey() const;

                    /**
                     * 设置片区Key
                     * @param _areaKey 片区Key
                     * 
                     */
                    void SetAreaKey(const std::string& _areaKey);

                    /**
                     * 判断参数 AreaKey 是否已赋值
                     * @return AreaKey 是否已赋值
                     * 
                     */
                    bool AreaKeyHasBeenSet() const;

                    /**
                     * 获取地域码表 id
                     * @return AreaRegionID 地域码表 id
                     * 
                     */
                    std::string GetAreaRegionID() const;

                    /**
                     * 设置地域码表 id
                     * @param _areaRegionID 地域码表 id
                     * 
                     */
                    void SetAreaRegionID(const std::string& _areaRegionID);

                    /**
                     * 判断参数 AreaRegionID 是否已赋值
                     * @return AreaRegionID 是否已赋值
                     * 
                     */
                    bool AreaRegionIDHasBeenSet() const;

                    /**
                     * 获取地域码表 code 如 ap-xxx（xxx 为地域词）
                     * @return AreaRegionCode 地域码表 code 如 ap-xxx（xxx 为地域词）
                     * 
                     */
                    std::string GetAreaRegionCode() const;

                    /**
                     * 设置地域码表 code 如 ap-xxx（xxx 为地域词）
                     * @param _areaRegionCode 地域码表 code 如 ap-xxx（xxx 为地域词）
                     * 
                     */
                    void SetAreaRegionCode(const std::string& _areaRegionCode);

                    /**
                     * 判断参数 AreaRegionCode 是否已赋值
                     * @return AreaRegionCode 是否已赋值
                     * 
                     */
                    bool AreaRegionCodeHasBeenSet() const;

                    /**
                     * 获取地域缩写
                     * @return AreaAbbr 地域缩写
                     * 
                     */
                    std::string GetAreaAbbr() const;

                    /**
                     * 设置地域缩写
                     * @param _areaAbbr 地域缩写
                     * 
                     */
                    void SetAreaAbbr(const std::string& _areaAbbr);

                    /**
                     * 判断参数 AreaAbbr 是否已赋值
                     * @return AreaAbbr 是否已赋值
                     * 
                     */
                    bool AreaAbbrHasBeenSet() const;

                private:

                    /**
                     * 片区Id
                     */
                    int64_t m_areaId;
                    bool m_areaIdHasBeenSet;

                    /**
                     * 片区状态(1=有效，2=无效)
                     */
                    int64_t m_areaStatus;
                    bool m_areaStatusHasBeenSet;

                    /**
                     * 片区名称
                     */
                    std::string m_areaName;
                    bool m_areaNameHasBeenSet;

                    /**
                     * 片区Key
                     */
                    std::string m_areaKey;
                    bool m_areaKeyHasBeenSet;

                    /**
                     * 地域码表 id
                     */
                    std::string m_areaRegionID;
                    bool m_areaRegionIDHasBeenSet;

                    /**
                     * 地域码表 code 如 ap-xxx（xxx 为地域词）
                     */
                    std::string m_areaRegionCode;
                    bool m_areaRegionCodeHasBeenSet;

                    /**
                     * 地域缩写
                     */
                    std::string m_areaAbbr;
                    bool m_areaAbbrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_RUMAREAINFO_H_
