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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_CFSCONFIG_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_CFSCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/CfsInsInfo.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 文件系统(cfs)配置描述
                */
                class CfsConfig : public AbstractModel
                {
                public:
                    CfsConfig();
                    ~CfsConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件系统信息列表
                     * @return CfsInsList 文件系统信息列表
                     * 
                     */
                    std::vector<CfsInsInfo> GetCfsInsList() const;

                    /**
                     * 设置文件系统信息列表
                     * @param _cfsInsList 文件系统信息列表
                     * 
                     */
                    void SetCfsInsList(const std::vector<CfsInsInfo>& _cfsInsList);

                    /**
                     * 判断参数 CfsInsList 是否已赋值
                     * @return CfsInsList 是否已赋值
                     * 
                     */
                    bool CfsInsListHasBeenSet() const;

                private:

                    /**
                     * 文件系统信息列表
                     */
                    std::vector<CfsInsInfo> m_cfsInsList;
                    bool m_cfsInsListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_CFSCONFIG_H_
