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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>
#include <tencentcloud/cls/v20201016/model/DashboardTopicInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 仪表盘信息
                */
                class DashboardInfo : public AbstractModel
                {
                public:
                    DashboardInfo();
                    ~DashboardInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取仪表盘id
                     * @return DashboardId 仪表盘id
                     * 
                     */
                    std::string GetDashboardId() const;

                    /**
                     * 设置仪表盘id
                     * @param _dashboardId 仪表盘id
                     * 
                     */
                    void SetDashboardId(const std::string& _dashboardId);

                    /**
                     * 判断参数 DashboardId 是否已赋值
                     * @return DashboardId 是否已赋值
                     * 
                     */
                    bool DashboardIdHasBeenSet() const;

                    /**
                     * 获取仪表盘名字
                     * @return DashboardName 仪表盘名字
                     * 
                     */
                    std::string GetDashboardName() const;

                    /**
                     * 设置仪表盘名字
                     * @param _dashboardName 仪表盘名字
                     * 
                     */
                    void SetDashboardName(const std::string& _dashboardName);

                    /**
                     * 判断参数 DashboardName 是否已赋值
                     * @return DashboardName 是否已赋值
                     * 
                     */
                    bool DashboardNameHasBeenSet() const;

                    /**
                     * 获取仪表盘数据
                     * @return Data 仪表盘数据
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置仪表盘数据
                     * @param _data 仪表盘数据
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取创建仪表盘的时间
                     * @return CreateTime 创建仪表盘的时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建仪表盘的时间
                     * @param _createTime 创建仪表盘的时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取AssumerUin非空则表示创建该日志主题的服务方Uin
                     * @return AssumerUin AssumerUin非空则表示创建该日志主题的服务方Uin
                     * 
                     */
                    uint64_t GetAssumerUin() const;

                    /**
                     * 设置AssumerUin非空则表示创建该日志主题的服务方Uin
                     * @param _assumerUin AssumerUin非空则表示创建该日志主题的服务方Uin
                     * 
                     */
                    void SetAssumerUin(const uint64_t& _assumerUin);

                    /**
                     * 判断参数 AssumerUin 是否已赋值
                     * @return AssumerUin 是否已赋值
                     * 
                     */
                    bool AssumerUinHasBeenSet() const;

                    /**
                     * 获取RoleName非空则表示创建该日志主题的服务方使用的角色
                     * @return RoleName RoleName非空则表示创建该日志主题的服务方使用的角色
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置RoleName非空则表示创建该日志主题的服务方使用的角色
                     * @param _roleName RoleName非空则表示创建该日志主题的服务方使用的角色
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取AssumerName非空则表示创建该日志主题的服务方名称
                     * @return AssumerName AssumerName非空则表示创建该日志主题的服务方名称
                     * 
                     */
                    std::string GetAssumerName() const;

                    /**
                     * 设置AssumerName非空则表示创建该日志主题的服务方名称
                     * @param _assumerName AssumerName非空则表示创建该日志主题的服务方名称
                     * 
                     */
                    void SetAssumerName(const std::string& _assumerName);

                    /**
                     * 判断参数 AssumerName 是否已赋值
                     * @return AssumerName 是否已赋值
                     * 
                     */
                    bool AssumerNameHasBeenSet() const;

                    /**
                     * 获取日志主题绑定的标签信息
                     * @return Tags 日志主题绑定的标签信息
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置日志主题绑定的标签信息
                     * @param _tags 日志主题绑定的标签信息
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取仪表盘所在地域： 为了兼容老的地域。
                     * @return DashboardRegion 仪表盘所在地域： 为了兼容老的地域。
                     * 
                     */
                    std::string GetDashboardRegion() const;

                    /**
                     * 设置仪表盘所在地域： 为了兼容老的地域。
                     * @param _dashboardRegion 仪表盘所在地域： 为了兼容老的地域。
                     * 
                     */
                    void SetDashboardRegion(const std::string& _dashboardRegion);

                    /**
                     * 判断参数 DashboardRegion 是否已赋值
                     * @return DashboardRegion 是否已赋值
                     * 
                     */
                    bool DashboardRegionHasBeenSet() const;

                    /**
                     * 获取修改仪表盘的时间
                     * @return UpdateTime 修改仪表盘的时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置修改仪表盘的时间
                     * @param _updateTime 修改仪表盘的时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取仪表盘对应的topic相关信息
                     * @return DashboardTopicInfos 仪表盘对应的topic相关信息
                     * 
                     */
                    std::vector<DashboardTopicInfo> GetDashboardTopicInfos() const;

                    /**
                     * 设置仪表盘对应的topic相关信息
                     * @param _dashboardTopicInfos 仪表盘对应的topic相关信息
                     * 
                     */
                    void SetDashboardTopicInfos(const std::vector<DashboardTopicInfo>& _dashboardTopicInfos);

                    /**
                     * 判断参数 DashboardTopicInfos 是否已赋值
                     * @return DashboardTopicInfos 是否已赋值
                     * 
                     */
                    bool DashboardTopicInfosHasBeenSet() const;

                private:

                    /**
                     * 仪表盘id
                     */
                    std::string m_dashboardId;
                    bool m_dashboardIdHasBeenSet;

                    /**
                     * 仪表盘名字
                     */
                    std::string m_dashboardName;
                    bool m_dashboardNameHasBeenSet;

                    /**
                     * 仪表盘数据
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 创建仪表盘的时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * AssumerUin非空则表示创建该日志主题的服务方Uin
                     */
                    uint64_t m_assumerUin;
                    bool m_assumerUinHasBeenSet;

                    /**
                     * RoleName非空则表示创建该日志主题的服务方使用的角色
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * AssumerName非空则表示创建该日志主题的服务方名称
                     */
                    std::string m_assumerName;
                    bool m_assumerNameHasBeenSet;

                    /**
                     * 日志主题绑定的标签信息
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 仪表盘所在地域： 为了兼容老的地域。
                     */
                    std::string m_dashboardRegion;
                    bool m_dashboardRegionHasBeenSet;

                    /**
                     * 修改仪表盘的时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 仪表盘对应的topic相关信息
                     */
                    std::vector<DashboardTopicInfo> m_dashboardTopicInfos;
                    bool m_dashboardTopicInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDINFO_H_
