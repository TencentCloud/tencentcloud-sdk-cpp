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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_ANDROIDRESULT_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_ANDROIDRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ms/v20180408/model/AndroidPlan.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * Android加固结果
                */
                class AndroidResult : public AbstractModel
                {
                public:
                    AndroidResult();
                    ~AndroidResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取结果Id,用于查询加固结果
                     * @return ResultId 结果Id,用于查询加固结果
                     * 
                     */
                    std::string GetResultId() const;

                    /**
                     * 设置结果Id,用于查询加固结果
                     * @param _resultId 结果Id,用于查询加固结果
                     * 
                     */
                    void SetResultId(const std::string& _resultId);

                    /**
                     * 判断参数 ResultId 是否已赋值
                     * @return ResultId 是否已赋值
                     * 
                     */
                    bool ResultIdHasBeenSet() const;

                    /**
                     * 获取与当前任务关联的订单id
                     * @return OrderId 与当前任务关联的订单id
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置与当前任务关联的订单id
                     * @param _orderId 与当前任务关联的订单id
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取与当前任务关联的资源Id
                     * @return ResourceId 与当前任务关联的资源Id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置与当前任务关联的资源Id
                     * @param _resourceId 与当前任务关联的资源Id
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取本次任务发起者
                     * @return OpUin 本次任务发起者
                     * 
                     */
                    int64_t GetOpUin() const;

                    /**
                     * 设置本次任务发起者
                     * @param _opUin 本次任务发起者
                     * 
                     */
                    void SetOpUin(const int64_t& _opUin);

                    /**
                     * 判断参数 OpUin 是否已赋值
                     * @return OpUin 是否已赋值
                     * 
                     */
                    bool OpUinHasBeenSet() const;

                    /**
                     * 获取应用类型：android-apk; android-aab;
                     * @return AppType 应用类型：android-apk; android-aab;
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置应用类型：android-apk; android-aab;
                     * @param _appType 应用类型：android-apk; android-aab;
                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取应用包名
                     * @return AppPkgName 应用包名
                     * 
                     */
                    std::string GetAppPkgName() const;

                    /**
                     * 设置应用包名
                     * @param _appPkgName 应用包名
                     * 
                     */
                    void SetAppPkgName(const std::string& _appPkgName);

                    /**
                     * 判断参数 AppPkgName 是否已赋值
                     * @return AppPkgName 是否已赋值
                     * 
                     */
                    bool AppPkgNameHasBeenSet() const;

                    /**
                     * 获取后台资源绑定的包名
                     * @return BindAppPkgName 后台资源绑定的包名
                     * 
                     */
                    std::string GetBindAppPkgName() const;

                    /**
                     * 设置后台资源绑定的包名
                     * @param _bindAppPkgName 后台资源绑定的包名
                     * 
                     */
                    void SetBindAppPkgName(const std::string& _bindAppPkgName);

                    /**
                     * 判断参数 BindAppPkgName 是否已赋值
                     * @return BindAppPkgName 是否已赋值
                     * 
                     */
                    bool BindAppPkgNameHasBeenSet() const;

                    /**
                     * 获取加固结果
                     * @return EncryptState 加固结果
                     * 
                     */
                    int64_t GetEncryptState() const;

                    /**
                     * 设置加固结果
                     * @param _encryptState 加固结果
                     * 
                     */
                    void SetEncryptState(const int64_t& _encryptState);

                    /**
                     * 判断参数 EncryptState 是否已赋值
                     * @return EncryptState 是否已赋值
                     * 
                     */
                    bool EncryptStateHasBeenSet() const;

                    /**
                     * 获取加固结果描述
                     * @return EncryptStateDesc 加固结果描述
                     * 
                     */
                    std::string GetEncryptStateDesc() const;

                    /**
                     * 设置加固结果描述
                     * @param _encryptStateDesc 加固结果描述
                     * 
                     */
                    void SetEncryptStateDesc(const std::string& _encryptStateDesc);

                    /**
                     * 判断参数 EncryptStateDesc 是否已赋值
                     * @return EncryptStateDesc 是否已赋值
                     * 
                     */
                    bool EncryptStateDescHasBeenSet() const;

                    /**
                     * 获取加固失败错误码
                     * @return EncryptErrCode 加固失败错误码
                     * 
                     */
                    int64_t GetEncryptErrCode() const;

                    /**
                     * 设置加固失败错误码
                     * @param _encryptErrCode 加固失败错误码
                     * 
                     */
                    void SetEncryptErrCode(const int64_t& _encryptErrCode);

                    /**
                     * 判断参数 EncryptErrCode 是否已赋值
                     * @return EncryptErrCode 是否已赋值
                     * 
                     */
                    bool EncryptErrCodeHasBeenSet() const;

                    /**
                     * 获取加固失败原因
                     * @return EncryptErrDesc 加固失败原因
                     * 
                     */
                    std::string GetEncryptErrDesc() const;

                    /**
                     * 设置加固失败原因
                     * @param _encryptErrDesc 加固失败原因
                     * 
                     */
                    void SetEncryptErrDesc(const std::string& _encryptErrDesc);

                    /**
                     * 判断参数 EncryptErrDesc 是否已赋值
                     * @return EncryptErrDesc 是否已赋值
                     * 
                     */
                    bool EncryptErrDescHasBeenSet() const;

                    /**
                     * 获取加固失败解决方案
                     * @return EncryptErrRef 加固失败解决方案
                     * 
                     */
                    std::string GetEncryptErrRef() const;

                    /**
                     * 设置加固失败解决方案
                     * @param _encryptErrRef 加固失败解决方案
                     * 
                     */
                    void SetEncryptErrRef(const std::string& _encryptErrRef);

                    /**
                     * 判断参数 EncryptErrRef 是否已赋值
                     * @return EncryptErrRef 是否已赋值
                     * 
                     */
                    bool EncryptErrRefHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return CreatTime 任务创建时间
                     * 
                     */
                    std::string GetCreatTime() const;

                    /**
                     * 设置任务创建时间
                     * @param _creatTime 任务创建时间
                     * 
                     */
                    void SetCreatTime(const std::string& _creatTime);

                    /**
                     * 判断参数 CreatTime 是否已赋值
                     * @return CreatTime 是否已赋值
                     * 
                     */
                    bool CreatTimeHasBeenSet() const;

                    /**
                     * 获取任务开始处理时间
                     * @return StartTime 任务开始处理时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务开始处理时间
                     * @param _startTime 任务开始处理时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取任务处理结束时间
                     * @return EndTime 任务处理结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务处理结束时间
                     * @param _endTime 任务处理结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取加固耗时（秒单位）
                     * @return CostTime 加固耗时（秒单位）
                     * 
                     */
                    int64_t GetCostTime() const;

                    /**
                     * 设置加固耗时（秒单位）
                     * @param _costTime 加固耗时（秒单位）
                     * 
                     */
                    void SetCostTime(const int64_t& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                    /**
                     * 获取在线加固-android应用原包下载链接
                     * @return AppUrl 在线加固-android应用原包下载链接
                     * 
                     */
                    std::string GetAppUrl() const;

                    /**
                     * 设置在线加固-android应用原包下载链接
                     * @param _appUrl 在线加固-android应用原包下载链接
                     * 
                     */
                    void SetAppUrl(const std::string& _appUrl);

                    /**
                     * 判断参数 AppUrl 是否已赋值
                     * @return AppUrl 是否已赋值
                     * 
                     */
                    bool AppUrlHasBeenSet() const;

                    /**
                     * 获取在线加固-android应用文件MD5算法值
                     * @return AppMd5 在线加固-android应用文件MD5算法值
                     * 
                     */
                    std::string GetAppMd5() const;

                    /**
                     * 设置在线加固-android应用文件MD5算法值
                     * @param _appMd5 在线加固-android应用文件MD5算法值
                     * 
                     */
                    void SetAppMd5(const std::string& _appMd5);

                    /**
                     * 判断参数 AppMd5 是否已赋值
                     * @return AppMd5 是否已赋值
                     * 
                     */
                    bool AppMd5HasBeenSet() const;

                    /**
                     * 获取在线加固-android应用应用名称
                     * @return AppName 在线加固-android应用应用名称
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置在线加固-android应用应用名称
                     * @param _appName 在线加固-android应用应用名称
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取在线加固-android应用版本；
                     * @return AppVersion 在线加固-android应用版本；
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置在线加固-android应用版本；
                     * @param _appVersion 在线加固-android应用版本；
                     * 
                     */
                    void SetAppVersion(const std::string& _appVersion);

                    /**
                     * 判断参数 AppVersion 是否已赋值
                     * @return AppVersion 是否已赋值
                     * 
                     */
                    bool AppVersionHasBeenSet() const;

                    /**
                     * 获取在线加固-android应用大小
                     * @return AppSize 在线加固-android应用大小
                     * 
                     */
                    int64_t GetAppSize() const;

                    /**
                     * 设置在线加固-android应用大小
                     * @param _appSize 在线加固-android应用大小
                     * 
                     */
                    void SetAppSize(const int64_t& _appSize);

                    /**
                     * 判断参数 AppSize 是否已赋值
                     * @return AppSize 是否已赋值
                     * 
                     */
                    bool AppSizeHasBeenSet() const;

                    /**
                     * 获取在线加固-android加固-腾讯云应用加固工具版本
                     * @return OnlineToolVersion 在线加固-android加固-腾讯云应用加固工具版本
                     * 
                     */
                    std::string GetOnlineToolVersion() const;

                    /**
                     * 设置在线加固-android加固-腾讯云应用加固工具版本
                     * @param _onlineToolVersion 在线加固-android加固-腾讯云应用加固工具版本
                     * 
                     */
                    void SetOnlineToolVersion(const std::string& _onlineToolVersion);

                    /**
                     * 判断参数 OnlineToolVersion 是否已赋值
                     * @return OnlineToolVersion 是否已赋值
                     * 
                     */
                    bool OnlineToolVersionHasBeenSet() const;

                    /**
                     * 获取在线加固-android加固，加固成功后文件md5算法值
                     * @return EncryptAppMd5 在线加固-android加固，加固成功后文件md5算法值
                     * 
                     */
                    std::string GetEncryptAppMd5() const;

                    /**
                     * 设置在线加固-android加固，加固成功后文件md5算法值
                     * @param _encryptAppMd5 在线加固-android加固，加固成功后文件md5算法值
                     * 
                     */
                    void SetEncryptAppMd5(const std::string& _encryptAppMd5);

                    /**
                     * 判断参数 EncryptAppMd5 是否已赋值
                     * @return EncryptAppMd5 是否已赋值
                     * 
                     */
                    bool EncryptAppMd5HasBeenSet() const;

                    /**
                     * 获取在线加固-android加固，加固成功后应用大小
                     * @return EncryptAppSize 在线加固-android加固，加固成功后应用大小
                     * 
                     */
                    int64_t GetEncryptAppSize() const;

                    /**
                     * 设置在线加固-android加固，加固成功后应用大小
                     * @param _encryptAppSize 在线加固-android加固，加固成功后应用大小
                     * 
                     */
                    void SetEncryptAppSize(const int64_t& _encryptAppSize);

                    /**
                     * 判断参数 EncryptAppSize 是否已赋值
                     * @return EncryptAppSize 是否已赋值
                     * 
                     */
                    bool EncryptAppSizeHasBeenSet() const;

                    /**
                     * 获取在线加固-android加固，加固包下载链接。
                     * @return EncryptPkgUrl 在线加固-android加固，加固包下载链接。
                     * 
                     */
                    std::string GetEncryptPkgUrl() const;

                    /**
                     * 设置在线加固-android加固，加固包下载链接。
                     * @param _encryptPkgUrl 在线加固-android加固，加固包下载链接。
                     * 
                     */
                    void SetEncryptPkgUrl(const std::string& _encryptPkgUrl);

                    /**
                     * 判断参数 EncryptPkgUrl 是否已赋值
                     * @return EncryptPkgUrl 是否已赋值
                     * 
                     */
                    bool EncryptPkgUrlHasBeenSet() const;

                    /**
                     * 获取输出工具-android加固-腾讯云输出工具版本
                     * @return OutputToolVersion 输出工具-android加固-腾讯云输出工具版本
                     * 
                     */
                    std::string GetOutputToolVersion() const;

                    /**
                     * 设置输出工具-android加固-腾讯云输出工具版本
                     * @param _outputToolVersion 输出工具-android加固-腾讯云输出工具版本
                     * 
                     */
                    void SetOutputToolVersion(const std::string& _outputToolVersion);

                    /**
                     * 判断参数 OutputToolVersion 是否已赋值
                     * @return OutputToolVersion 是否已赋值
                     * 
                     */
                    bool OutputToolVersionHasBeenSet() const;

                    /**
                     * 获取输出工具-android加固-工具大小
                     * @return OutputToolSize 输出工具-android加固-工具大小
                     * 
                     */
                    int64_t GetOutputToolSize() const;

                    /**
                     * 设置输出工具-android加固-工具大小
                     * @param _outputToolSize 输出工具-android加固-工具大小
                     * 
                     */
                    void SetOutputToolSize(const int64_t& _outputToolSize);

                    /**
                     * 判断参数 OutputToolSize 是否已赋值
                     * @return OutputToolSize 是否已赋值
                     * 
                     */
                    bool OutputToolSizeHasBeenSet() const;

                    /**
                     * 获取输出工具-android加固-工具输出时间
                     * @return ToolOutputTime 输出工具-android加固-工具输出时间
                     * 
                     */
                    std::string GetToolOutputTime() const;

                    /**
                     * 设置输出工具-android加固-工具输出时间
                     * @param _toolOutputTime 输出工具-android加固-工具输出时间
                     * 
                     */
                    void SetToolOutputTime(const std::string& _toolOutputTime);

                    /**
                     * 判断参数 ToolOutputTime 是否已赋值
                     * @return ToolOutputTime 是否已赋值
                     * 
                     */
                    bool ToolOutputTimeHasBeenSet() const;

                    /**
                     * 获取输出工具-android加固-工具到期时间
                     * @return ToolExpireTime 输出工具-android加固-工具到期时间
                     * 
                     */
                    std::string GetToolExpireTime() const;

                    /**
                     * 设置输出工具-android加固-工具到期时间
                     * @param _toolExpireTime 输出工具-android加固-工具到期时间
                     * 
                     */
                    void SetToolExpireTime(const std::string& _toolExpireTime);

                    /**
                     * 判断参数 ToolExpireTime 是否已赋值
                     * @return ToolExpireTime 是否已赋值
                     * 
                     */
                    bool ToolExpireTimeHasBeenSet() const;

                    /**
                     * 获取输出工具-android加固-输出工具下载链接
                     * @return OutputToolUrl 输出工具-android加固-输出工具下载链接
                     * 
                     */
                    std::string GetOutputToolUrl() const;

                    /**
                     * 设置输出工具-android加固-输出工具下载链接
                     * @param _outputToolUrl 输出工具-android加固-输出工具下载链接
                     * 
                     */
                    void SetOutputToolUrl(const std::string& _outputToolUrl);

                    /**
                     * 判断参数 OutputToolUrl 是否已赋值
                     * @return OutputToolUrl 是否已赋值
                     * 
                     */
                    bool OutputToolUrlHasBeenSet() const;

                    /**
                     * 获取本次android加固策略信息
                     * @return AndroidPlan 本次android加固策略信息
                     * 
                     */
                    AndroidPlan GetAndroidPlan() const;

                    /**
                     * 设置本次android加固策略信息
                     * @param _androidPlan 本次android加固策略信息
                     * 
                     */
                    void SetAndroidPlan(const AndroidPlan& _androidPlan);

                    /**
                     * 判断参数 AndroidPlan 是否已赋值
                     * @return AndroidPlan 是否已赋值
                     * 
                     */
                    bool AndroidPlanHasBeenSet() const;

                private:

                    /**
                     * 结果Id,用于查询加固结果
                     */
                    std::string m_resultId;
                    bool m_resultIdHasBeenSet;

                    /**
                     * 与当前任务关联的订单id
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 与当前任务关联的资源Id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 本次任务发起者
                     */
                    int64_t m_opUin;
                    bool m_opUinHasBeenSet;

                    /**
                     * 应用类型：android-apk; android-aab;
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * 应用包名
                     */
                    std::string m_appPkgName;
                    bool m_appPkgNameHasBeenSet;

                    /**
                     * 后台资源绑定的包名
                     */
                    std::string m_bindAppPkgName;
                    bool m_bindAppPkgNameHasBeenSet;

                    /**
                     * 加固结果
                     */
                    int64_t m_encryptState;
                    bool m_encryptStateHasBeenSet;

                    /**
                     * 加固结果描述
                     */
                    std::string m_encryptStateDesc;
                    bool m_encryptStateDescHasBeenSet;

                    /**
                     * 加固失败错误码
                     */
                    int64_t m_encryptErrCode;
                    bool m_encryptErrCodeHasBeenSet;

                    /**
                     * 加固失败原因
                     */
                    std::string m_encryptErrDesc;
                    bool m_encryptErrDescHasBeenSet;

                    /**
                     * 加固失败解决方案
                     */
                    std::string m_encryptErrRef;
                    bool m_encryptErrRefHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_creatTime;
                    bool m_creatTimeHasBeenSet;

                    /**
                     * 任务开始处理时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务处理结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 加固耗时（秒单位）
                     */
                    int64_t m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * 在线加固-android应用原包下载链接
                     */
                    std::string m_appUrl;
                    bool m_appUrlHasBeenSet;

                    /**
                     * 在线加固-android应用文件MD5算法值
                     */
                    std::string m_appMd5;
                    bool m_appMd5HasBeenSet;

                    /**
                     * 在线加固-android应用应用名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 在线加固-android应用版本；
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * 在线加固-android应用大小
                     */
                    int64_t m_appSize;
                    bool m_appSizeHasBeenSet;

                    /**
                     * 在线加固-android加固-腾讯云应用加固工具版本
                     */
                    std::string m_onlineToolVersion;
                    bool m_onlineToolVersionHasBeenSet;

                    /**
                     * 在线加固-android加固，加固成功后文件md5算法值
                     */
                    std::string m_encryptAppMd5;
                    bool m_encryptAppMd5HasBeenSet;

                    /**
                     * 在线加固-android加固，加固成功后应用大小
                     */
                    int64_t m_encryptAppSize;
                    bool m_encryptAppSizeHasBeenSet;

                    /**
                     * 在线加固-android加固，加固包下载链接。
                     */
                    std::string m_encryptPkgUrl;
                    bool m_encryptPkgUrlHasBeenSet;

                    /**
                     * 输出工具-android加固-腾讯云输出工具版本
                     */
                    std::string m_outputToolVersion;
                    bool m_outputToolVersionHasBeenSet;

                    /**
                     * 输出工具-android加固-工具大小
                     */
                    int64_t m_outputToolSize;
                    bool m_outputToolSizeHasBeenSet;

                    /**
                     * 输出工具-android加固-工具输出时间
                     */
                    std::string m_toolOutputTime;
                    bool m_toolOutputTimeHasBeenSet;

                    /**
                     * 输出工具-android加固-工具到期时间
                     */
                    std::string m_toolExpireTime;
                    bool m_toolExpireTimeHasBeenSet;

                    /**
                     * 输出工具-android加固-输出工具下载链接
                     */
                    std::string m_outputToolUrl;
                    bool m_outputToolUrlHasBeenSet;

                    /**
                     * 本次android加固策略信息
                     */
                    AndroidPlan m_androidPlan;
                    bool m_androidPlanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_ANDROIDRESULT_H_
