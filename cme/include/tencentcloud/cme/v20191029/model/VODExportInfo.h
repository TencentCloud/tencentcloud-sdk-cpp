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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_VODEXPORTINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_VODEXPORTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/ThirdPartyPublishInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 云点播导出信息。
                */
                class VODExportInfo : public AbstractModel
                {
                public:
                    VODExportInfo();
                    ~VODExportInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取导出的媒资名称。
                     * @return Name 导出的媒资名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置导出的媒资名称。
                     * @param _name 导出的媒资名称。
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
                     * 获取导出的媒资分类 Id。
                     * @return ClassId 导出的媒资分类 Id。
                     * 
                     */
                    uint64_t GetClassId() const;

                    /**
                     * 设置导出的媒资分类 Id。
                     * @param _classId 导出的媒资分类 Id。
                     * 
                     */
                    void SetClassId(const uint64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     * 
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取第三方平台发布信息列表。暂未正式对外，请勿使用。
                     * @return ThirdPartyPublishInfos 第三方平台发布信息列表。暂未正式对外，请勿使用。
                     * 
                     */
                    std::vector<ThirdPartyPublishInfo> GetThirdPartyPublishInfos() const;

                    /**
                     * 设置第三方平台发布信息列表。暂未正式对外，请勿使用。
                     * @param _thirdPartyPublishInfos 第三方平台发布信息列表。暂未正式对外，请勿使用。
                     * 
                     */
                    void SetThirdPartyPublishInfos(const std::vector<ThirdPartyPublishInfo>& _thirdPartyPublishInfos);

                    /**
                     * 判断参数 ThirdPartyPublishInfos 是否已赋值
                     * @return ThirdPartyPublishInfos 是否已赋值
                     * 
                     */
                    bool ThirdPartyPublishInfosHasBeenSet() const;

                private:

                    /**
                     * 导出的媒资名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 导出的媒资分类 Id。
                     */
                    uint64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * 第三方平台发布信息列表。暂未正式对外，请勿使用。
                     */
                    std::vector<ThirdPartyPublishInfo> m_thirdPartyPublishInfos;
                    bool m_thirdPartyPublishInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_VODEXPORTINFO_H_
