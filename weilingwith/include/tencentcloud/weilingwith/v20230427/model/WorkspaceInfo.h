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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_WORKSPACEINFO_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_WORKSPACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/AdministrativeDetail.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 工作空间信息描述
                */
                class WorkspaceInfo : public AbstractModel
                {
                public:
                    WorkspaceInfo();
                    ~WorkspaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作空间Id
                     * @return WorkspaceId 工作空间Id
                     * 
                     */
                    int64_t GetWorkspaceId() const;

                    /**
                     * 设置工作空间Id
                     * @param _workspaceId 工作空间Id
                     * 
                     */
                    void SetWorkspaceId(const int64_t& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取工作空间中文名字
                     * @return ChineseName 工作空间中文名字
                     * 
                     */
                    std::string GetChineseName() const;

                    /**
                     * 设置工作空间中文名字
                     * @param _chineseName 工作空间中文名字
                     * 
                     */
                    void SetChineseName(const std::string& _chineseName);

                    /**
                     * 判断参数 ChineseName 是否已赋值
                     * @return ChineseName 是否已赋值
                     * 
                     */
                    bool ChineseNameHasBeenSet() const;

                    /**
                     * 获取工作空间描述
                     * @return Description 工作空间描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置工作空间描述
                     * @param _description 工作空间描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取工作空间是否删除状态
                     * @return Status 工作空间是否删除状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置工作空间是否删除状态
                     * @param _status 工作空间是否删除状态
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取该工作空间绑定的区/县的行政区名字
                     * @return ParkName 该工作空间绑定的区/县的行政区名字
                     * 
                     */
                    std::string GetParkName() const;

                    /**
                     * 设置该工作空间绑定的区/县的行政区名字
                     * @param _parkName 该工作空间绑定的区/县的行政区名字
                     * 
                     */
                    void SetParkName(const std::string& _parkName);

                    /**
                     * 判断参数 ParkName 是否已赋值
                     * @return ParkName 是否已赋值
                     * 
                     */
                    bool ParkNameHasBeenSet() const;

                    /**
                     * 获取该工作空间绑定的区/县的行政区编码
                     * @return ParkNum 该工作空间绑定的区/县的行政区编码
                     * 
                     */
                    std::string GetParkNum() const;

                    /**
                     * 设置该工作空间绑定的区/县的行政区编码
                     * @param _parkNum 该工作空间绑定的区/县的行政区编码
                     * 
                     */
                    void SetParkNum(const std::string& _parkNum);

                    /**
                     * 判断参数 ParkNum 是否已赋值
                     * @return ParkNum 是否已赋值
                     * 
                     */
                    bool ParkNumHasBeenSet() const;

                    /**
                     * 获取获取该工作空间绑定的区/县的上级行政区划信息
                     * @return AdministrativeDetailSet 获取该工作空间绑定的区/县的上级行政区划信息
                     * 
                     */
                    std::vector<AdministrativeDetail> GetAdministrativeDetailSet() const;

                    /**
                     * 设置获取该工作空间绑定的区/县的上级行政区划信息
                     * @param _administrativeDetailSet 获取该工作空间绑定的区/县的上级行政区划信息
                     * 
                     */
                    void SetAdministrativeDetailSet(const std::vector<AdministrativeDetail>& _administrativeDetailSet);

                    /**
                     * 判断参数 AdministrativeDetailSet 是否已赋值
                     * @return AdministrativeDetailSet 是否已赋值
                     * 
                     */
                    bool AdministrativeDetailSetHasBeenSet() const;

                private:

                    /**
                     * 工作空间Id
                     */
                    int64_t m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 工作空间中文名字
                     */
                    std::string m_chineseName;
                    bool m_chineseNameHasBeenSet;

                    /**
                     * 工作空间描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 工作空间是否删除状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 该工作空间绑定的区/县的行政区名字
                     */
                    std::string m_parkName;
                    bool m_parkNameHasBeenSet;

                    /**
                     * 该工作空间绑定的区/县的行政区编码
                     */
                    std::string m_parkNum;
                    bool m_parkNumHasBeenSet;

                    /**
                     * 获取该工作空间绑定的区/县的上级行政区划信息
                     */
                    std::vector<AdministrativeDetail> m_administrativeDetailSet;
                    bool m_administrativeDetailSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_WORKSPACEINFO_H_
