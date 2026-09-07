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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_LIVEAVATARCLONEFIGUREINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_LIVEAVATARCLONEFIGUREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 数字人直播间克隆形象信息
                */
                class LiveAvatarCloneFigureInfo : public AbstractModel
                {
                public:
                    LiveAvatarCloneFigureInfo();
                    ~LiveAvatarCloneFigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>克隆形象任务ID</p>
                     * @return TaskId <p>克隆形象任务ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>克隆形象任务ID</p>
                     * @param _taskId <p>克隆形象任务ID</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>场景模式</p><p>枚举值：</p><ul><li>PHOTO： 图生形象</li><li>GREEN_SCREEN： 绿幕形象</li><li>REAL_SHOT： 实景形象</li></ul>
                     * @return SceneType <p>场景模式</p><p>枚举值：</p><ul><li>PHOTO： 图生形象</li><li>GREEN_SCREEN： 绿幕形象</li><li>REAL_SHOT： 实景形象</li></ul>
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置<p>场景模式</p><p>枚举值：</p><ul><li>PHOTO： 图生形象</li><li>GREEN_SCREEN： 绿幕形象</li><li>REAL_SHOT： 实景形象</li></ul>
                     * @param _sceneType <p>场景模式</p><p>枚举值：</p><ul><li>PHOTO： 图生形象</li><li>GREEN_SCREEN： 绿幕形象</li><li>REAL_SHOT： 实景形象</li></ul>
                     * 
                     */
                    void SetSceneType(const std::string& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     * 
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取<p>形象名称</p>
                     * @return FigureName <p>形象名称</p>
                     * 
                     */
                    std::string GetFigureName() const;

                    /**
                     * 设置<p>形象名称</p>
                     * @param _figureName <p>形象名称</p>
                     * 
                     */
                    void SetFigureName(const std::string& _figureName);

                    /**
                     * 判断参数 FigureName 是否已赋值
                     * @return FigureName 是否已赋值
                     * 
                     */
                    bool FigureNameHasBeenSet() const;

                    /**
                     * 获取<p>性别：男或者女</p>
                     * @return Gender <p>性别：男或者女</p>
                     * 
                     */
                    std::string GetGender() const;

                    /**
                     * 设置<p>性别：男或者女</p>
                     * @param _gender <p>性别：男或者女</p>
                     * 
                     */
                    void SetGender(const std::string& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取<p>状态</p><p>枚举值：</p><ul><li>SUCCESS： 成功</li><li>FAILED： 失败</li><li>PROCESSING： 生成中</li></ul>
                     * @return Status <p>状态</p><p>枚举值：</p><ul><li>SUCCESS： 成功</li><li>FAILED： 失败</li><li>PROCESSING： 生成中</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态</p><p>枚举值：</p><ul><li>SUCCESS： 成功</li><li>FAILED： 失败</li><li>PROCESSING： 生成中</li></ul>
                     * @param _status <p>状态</p><p>枚举值：</p><ul><li>SUCCESS： 成功</li><li>FAILED： 失败</li><li>PROCESSING： 生成中</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>进度条</p>
                     * @return Progress <p>进度条</p>
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置<p>进度条</p>
                     * @param _progress <p>进度条</p>
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>克隆好的形象在系统的key</p>
                     * @return AvatarKey <p>克隆好的形象在系统的key</p>
                     * 
                     */
                    std::string GetAvatarKey() const;

                    /**
                     * 设置<p>克隆好的形象在系统的key</p>
                     * @param _avatarKey <p>克隆好的形象在系统的key</p>
                     * 
                     */
                    void SetAvatarKey(const std::string& _avatarKey);

                    /**
                     * 判断参数 AvatarKey 是否已赋值
                     * @return AvatarKey 是否已赋值
                     * 
                     */
                    bool AvatarKeyHasBeenSet() const;

                    /**
                     * 获取<p>形象的图像</p>
                     * @return FigureImg <p>形象的图像</p>
                     * 
                     */
                    std::string GetFigureImg() const;

                    /**
                     * 设置<p>形象的图像</p>
                     * @param _figureImg <p>形象的图像</p>
                     * 
                     */
                    void SetFigureImg(const std::string& _figureImg);

                    /**
                     * 判断参数 FigureImg 是否已赋值
                     * @return FigureImg 是否已赋值
                     * 
                     */
                    bool FigureImgHasBeenSet() const;

                    /**
                     * 获取<p>失败原因，成功时，该字段没值</p>
                     * @return FailReason <p>失败原因，成功时，该字段没值</p>
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置<p>失败原因，成功时，该字段没值</p>
                     * @param _failReason <p>失败原因，成功时，该字段没值</p>
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取<p>训练视频</p>
                     * @return MaterialUrl <p>训练视频</p>
                     * 
                     */
                    std::string GetMaterialUrl() const;

                    /**
                     * 设置<p>训练视频</p>
                     * @param _materialUrl <p>训练视频</p>
                     * 
                     */
                    void SetMaterialUrl(const std::string& _materialUrl);

                    /**
                     * 判断参数 MaterialUrl 是否已赋值
                     * @return MaterialUrl 是否已赋值
                     * 
                     */
                    bool MaterialUrlHasBeenSet() const;

                    /**
                     * 获取<p>该克隆音色创建的时间</p><p>参数格式：YYYY-MM-DD</p>
                     * @return CreateTime <p>该克隆音色创建的时间</p><p>参数格式：YYYY-MM-DD</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>该克隆音色创建的时间</p><p>参数格式：YYYY-MM-DD</p>
                     * @param _createTime <p>该克隆音色创建的时间</p><p>参数格式：YYYY-MM-DD</p>
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
                     * 获取<p>更新时间</p><p>参数格式：YYYY-MM</p>
                     * @return UpdateTime <p>更新时间</p><p>参数格式：YYYY-MM</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p><p>参数格式：YYYY-MM</p>
                     * @param _updateTime <p>更新时间</p><p>参数格式：YYYY-MM</p>
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
                     * 获取<p>是否有续期</p>
                     * @return RenewStatus <p>是否有续期</p>
                     * 
                     */
                    std::string GetRenewStatus() const;

                    /**
                     * 设置<p>是否有续期</p>
                     * @param _renewStatus <p>是否有续期</p>
                     * 
                     */
                    void SetRenewStatus(const std::string& _renewStatus);

                    /**
                     * 判断参数 RenewStatus 是否已赋值
                     * @return RenewStatus 是否已赋值
                     * 
                     */
                    bool RenewStatusHasBeenSet() const;

                    /**
                     * 获取<p>是否过期</p>
                     * @return IsExpired <p>是否过期</p>
                     * 
                     */
                    bool GetIsExpired() const;

                    /**
                     * 设置<p>是否过期</p>
                     * @param _isExpired <p>是否过期</p>
                     * 
                     */
                    void SetIsExpired(const bool& _isExpired);

                    /**
                     * 判断参数 IsExpired 是否已赋值
                     * @return IsExpired 是否已赋值
                     * 
                     */
                    bool IsExpiredHasBeenSet() const;

                    /**
                     * 获取<p>有效期时间</p><p>参数格式：YYYY-MM</p>
                     * @return ExpireTime <p>有效期时间</p><p>参数格式：YYYY-MM</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>有效期时间</p><p>参数格式：YYYY-MM</p>
                     * @param _expireTime <p>有效期时间</p><p>参数格式：YYYY-MM</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否循环播放(实景克隆形象能使用)</p>
                     * @return NeedPlayback <p>是否循环播放(实景克隆形象能使用)</p>
                     * 
                     */
                    uint64_t GetNeedPlayback() const;

                    /**
                     * 设置<p>是否循环播放(实景克隆形象能使用)</p>
                     * @param _needPlayback <p>是否循环播放(实景克隆形象能使用)</p>
                     * 
                     */
                    void SetNeedPlayback(const uint64_t& _needPlayback);

                    /**
                     * 判断参数 NeedPlayback 是否已赋值
                     * @return NeedPlayback 是否已赋值
                     * 
                     */
                    bool NeedPlaybackHasBeenSet() const;

                    /**
                     * 获取<p>训练幅度，0：表示只有有头部动；1表示头部和手势都有训练</p><p>单位：1</p>
                     * @return PhotoVersion <p>训练幅度，0：表示只有有头部动；1表示头部和手势都有训练</p><p>单位：1</p>
                     * 
                     */
                    uint64_t GetPhotoVersion() const;

                    /**
                     * 设置<p>训练幅度，0：表示只有有头部动；1表示头部和手势都有训练</p><p>单位：1</p>
                     * @param _photoVersion <p>训练幅度，0：表示只有有头部动；1表示头部和手势都有训练</p><p>单位：1</p>
                     * 
                     */
                    void SetPhotoVersion(const uint64_t& _photoVersion);

                    /**
                     * 判断参数 PhotoVersion 是否已赋值
                     * @return PhotoVersion 是否已赋值
                     * 
                     */
                    bool PhotoVersionHasBeenSet() const;

                    /**
                     * 获取<p>待确认视频</p>
                     * @return ConfirmDemoUrls <p>待确认视频</p>
                     * 
                     */
                    std::string GetConfirmDemoUrls() const;

                    /**
                     * 设置<p>待确认视频</p>
                     * @param _confirmDemoUrls <p>待确认视频</p>
                     * 
                     */
                    void SetConfirmDemoUrls(const std::string& _confirmDemoUrls);

                    /**
                     * 判断参数 ConfirmDemoUrls 是否已赋值
                     * @return ConfirmDemoUrls 是否已赋值
                     * 
                     */
                    bool ConfirmDemoUrlsHasBeenSet() const;

                    /**
                     * 获取<p>形象克隆完成时间</p><p>参数格式：YYYY-MM</p>
                     * @return EstimatedCompleteTime <p>形象克隆完成时间</p><p>参数格式：YYYY-MM</p>
                     * 
                     */
                    std::string GetEstimatedCompleteTime() const;

                    /**
                     * 设置<p>形象克隆完成时间</p><p>参数格式：YYYY-MM</p>
                     * @param _estimatedCompleteTime <p>形象克隆完成时间</p><p>参数格式：YYYY-MM</p>
                     * 
                     */
                    void SetEstimatedCompleteTime(const std::string& _estimatedCompleteTime);

                    /**
                     * 判断参数 EstimatedCompleteTime 是否已赋值
                     * @return EstimatedCompleteTime 是否已赋值
                     * 
                     */
                    bool EstimatedCompleteTimeHasBeenSet() const;

                private:

                    /**
                     * <p>克隆形象任务ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>场景模式</p><p>枚举值：</p><ul><li>PHOTO： 图生形象</li><li>GREEN_SCREEN： 绿幕形象</li><li>REAL_SHOT： 实景形象</li></ul>
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * <p>形象名称</p>
                     */
                    std::string m_figureName;
                    bool m_figureNameHasBeenSet;

                    /**
                     * <p>性别：男或者女</p>
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * <p>状态</p><p>枚举值：</p><ul><li>SUCCESS： 成功</li><li>FAILED： 失败</li><li>PROCESSING： 生成中</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>进度条</p>
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>克隆好的形象在系统的key</p>
                     */
                    std::string m_avatarKey;
                    bool m_avatarKeyHasBeenSet;

                    /**
                     * <p>形象的图像</p>
                     */
                    std::string m_figureImg;
                    bool m_figureImgHasBeenSet;

                    /**
                     * <p>失败原因，成功时，该字段没值</p>
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * <p>训练视频</p>
                     */
                    std::string m_materialUrl;
                    bool m_materialUrlHasBeenSet;

                    /**
                     * <p>该克隆音色创建的时间</p><p>参数格式：YYYY-MM-DD</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p><p>参数格式：YYYY-MM</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>是否有续期</p>
                     */
                    std::string m_renewStatus;
                    bool m_renewStatusHasBeenSet;

                    /**
                     * <p>是否过期</p>
                     */
                    bool m_isExpired;
                    bool m_isExpiredHasBeenSet;

                    /**
                     * <p>有效期时间</p><p>参数格式：YYYY-MM</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>是否循环播放(实景克隆形象能使用)</p>
                     */
                    uint64_t m_needPlayback;
                    bool m_needPlaybackHasBeenSet;

                    /**
                     * <p>训练幅度，0：表示只有有头部动；1表示头部和手势都有训练</p><p>单位：1</p>
                     */
                    uint64_t m_photoVersion;
                    bool m_photoVersionHasBeenSet;

                    /**
                     * <p>待确认视频</p>
                     */
                    std::string m_confirmDemoUrls;
                    bool m_confirmDemoUrlsHasBeenSet;

                    /**
                     * <p>形象克隆完成时间</p><p>参数格式：YYYY-MM</p>
                     */
                    std::string m_estimatedCompleteTime;
                    bool m_estimatedCompleteTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_LIVEAVATARCLONEFIGUREINFO_H_
