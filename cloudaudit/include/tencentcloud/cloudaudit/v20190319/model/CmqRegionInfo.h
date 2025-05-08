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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_CMQREGIONINFO_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_CMQREGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * cmq地域信息
                */
                class CmqRegionInfo : public AbstractModel
                {
                public:
                    CmqRegionInfo();
                    ~CmqRegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域描述
                     * @return CmqRegionName 地域描述
                     * 
                     */
                    std::string GetCmqRegionName() const;

                    /**
                     * 设置地域描述
                     * @param _cmqRegionName 地域描述
                     * 
                     */
                    void SetCmqRegionName(const std::string& _cmqRegionName);

                    /**
                     * 判断参数 CmqRegionName 是否已赋值
                     * @return CmqRegionName 是否已赋值
                     * 
                     */
                    bool CmqRegionNameHasBeenSet() const;

                    /**
                     * 获取cmq地域
                     * @return CmqRegion cmq地域
                     * 
                     */
                    std::string GetCmqRegion() const;

                    /**
                     * 设置cmq地域
                     * @param _cmqRegion cmq地域
                     * 
                     */
                    void SetCmqRegion(const std::string& _cmqRegion);

                    /**
                     * 判断参数 CmqRegion 是否已赋值
                     * @return CmqRegion 是否已赋值
                     * 
                     */
                    bool CmqRegionHasBeenSet() const;

                private:

                    /**
                     * 地域描述
                     */
                    std::string m_cmqRegionName;
                    bool m_cmqRegionNameHasBeenSet;

                    /**
                     * cmq地域
                     */
                    std::string m_cmqRegion;
                    bool m_cmqRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_CMQREGIONINFO_H_
